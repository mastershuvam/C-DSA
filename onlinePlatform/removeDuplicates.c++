#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string res = "";

        for(auto& c : s){
            if(!res.empty() && res.back() == c){
                res.pop_back();
            } else {
                res.push_back(c);
            }
        }
        return res;
    }
};

int main() {
    Solution solution;

    string s;
    cout << "Enter string: ";
    cin >> s;

    string result = solution.removeDuplicates(s);
    cout << "After removing duplicates: " << result << endl;

    return 0;
}
