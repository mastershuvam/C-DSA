#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        int freq[26] = {0};
        
        for (char c : s) {
            // Only process lowercase letters
            if (c >= 'a' && c <= 'z') {
                freq[c - 'a']++;
            }
            // Optional: Convert uppercase to lowercase
            else if (c >= 'A' && c <= 'Z') {
                freq[c - 'A']++;
            }
        }
        
        int maxFreq = 0;
        char maxChar = 'a';
        
        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                maxChar = 'a' + i;
            }
        }
        
        return maxChar;
    }
};

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    Solution sol;
    char result = sol.getMaxOccuringChar(input);
    cout << "Maximum occurring character: " << result << endl;

    return 0;
}
