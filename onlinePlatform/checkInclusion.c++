#include <iostream>
#include <string>
using namespace std;

class Solution {
    // Function to check if two frequency arrays are equal
    bool check(int a[26], int b[26]){
        for(int i = 0; i < 26; i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }

public:
    // Main function to check inclusion using sliding window
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};

        // Count frequency of characters in s1
        for(int i = 0; i < s1.length(); i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        int count2[26] = {0};
        int i = 0;
        int windowSize = s1.length();

        // First window of s2
        while(i < windowSize && i < s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        // Check first window
        if(check(count1, count2)){
            return true;
        }

        // Move the sliding window
        while(i < s2.length()){
            int newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            int oldChar = s2[i - windowSize];
            index = oldChar - 'a';
            count2[index]--;

            if(check(count1, count2)){
                return true;
            }
            i++;
        }

        return false;
    }
};

// Main function to test the code
int main() {
    Solution solution;
    
    string s1, s2;
    
    cout << "Enter string s1: ";
    cin >> s1;
    
    cout << "Enter string s2: ";
    cin >> s2;

    if(solution.checkInclusion(s1, s2)){
        cout << "Yes, s2 contains a permutation of s1." << endl;
    } else {
        cout << "No, s2 does not contain any permutation of s1." << endl;
    }

    return 0;
}
