#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void recur(vector<string>& res, string num, int target, int idx,
               long long prev_operand, long long cur_operand, long long value, string path) {
        int N = num.size();

        if (idx == N) {
            if (value == target && cur_operand == 0) {
                res.push_back(path);
            }
            return;
        }

        char current_char = num[idx];
        int digit = current_char - '0';

        cur_operand = cur_operand * 10 + digit;
        string str_op = to_string(cur_operand);

        // Avoid numbers with leading zero like "05"
        if (cur_operand > 0) {
            recur(res, num, target, idx + 1, prev_operand, cur_operand, value, path);
        }

        // Addition
        if (!path.empty()) {
            recur(res, num, target, idx + 1, cur_operand, 0, value + cur_operand, path + "+" + str_op);
        } else {
            // First number (no operator)
            recur(res, num, target, idx + 1, cur_operand, 0, value + cur_operand, str_op);
            return; // can't use '-' or '*' before first number
        }

        // Subtraction
        recur(res, num, target, idx + 1, -cur_operand, 0, value - cur_operand, path + "-" + str_op);

        // Multiplication
        long long new_value = value - prev_operand + (prev_operand * cur_operand);
        recur(res, num, target, idx + 1, prev_operand * cur_operand, 0, new_value, path + "*" + str_op);
    }

    vector<string> addOperators(string num, int target) {
        vector<string> res;
        recur(res, num, target, 0, 0, 0, 0, "");
        return res;
    }
};

int main() {
    string num;
    int target;
    
    cout << "Enter the number string: ";
    cin >> num;

    cout << "Enter the target value: ";
    cin >> target;

    Solution sol;
    vector<string> result = sol.addOperators(num, target);

    cout << "Valid expressions:\n";
    for (const string& expr : result) {
        cout << expr << endl;
    }

    return 0;
}
