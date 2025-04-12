#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length() != 0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution sol;
    
    string s, part;
    
    // Input from user
    cout << "Enter the main string: ";
    cin >> s;
    cout << "Enter the part to remove: ";
    cin >> part;

    // Call the function
    string result = sol.removeOccurrences(s, part);

    // Output the result
    cout << "Result after removing occurrences: " << result << endl;

    return 0;
}
