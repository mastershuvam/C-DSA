#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string filterstring(string s) {
        string res = "";

        for (char c : s) {
            if (isalnum(c)) {
                res += tolower(c);
            }
        }
        return res;
    }

    bool isPalindrome(string s) {
        string filter = filterstring(s);

        int l = 0;
        int h = filter.size() - 1;

        while (l < h) {
            if (filter[l] != filter[h]) {
                return false;
            } else {
                l++;
                h--;
            }
        }

        return true;
    }
};

int main() {
    int T;
    cout << "Enter number of test cases: ";
    cin >> T;
    cin.ignore();  

    Solution sol;

    while (T--) {
        string input;
        cout << "Enter string: ";
        getline(cin, input);

        if (sol.isPalindrome(input)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
