#include <bits/stdc++.h>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

// Function to check if binary representation of N is a palindrome
bool checkPalindrome(long long N) {
    string binary = "";
    while (N > 0) {
        binary += (N % 2) + '0';  // Add LSB
        N /= 2;
    }
    // binary is in reverse order, reverse it to get correct binary representation
    reverse(binary.begin(), binary.end());

    return isPalindrome(binary);
}

int main() {
    long long num;
    cout << "Enter a number: ";
    cin >> num;

    if (checkPalindrome(num)) {
        cout << "The binary representation of " << num << " is a palindrome." << endl;
    } else {
        cout << "The binary representation of " << num << " is not a palindrome." << endl;
    }

    return 0;
}
