#include <bits/stdc++.h>
using namespace std;

// Recursive function to reverse the string
void reverse(string &str, int i, int j) {
    if (i >= j) {
        return;
    }

    swap(str[i], str[j]);
    reverse(str, i + 1, j - 1);
}

// Wrapper function
string reverseString(string str) {
    reverse(str, 0, str.size() - 1);
    return str;
}

// Main function
int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
