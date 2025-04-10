#include <bits/stdc++.h>
using namespace std;

string isRev(string s) {
    int start = 0;
    int end = s.size() - 1;

    while (start < end) {
        swap(s[start++], s[end--]);
    }

    return s;
}

bool checkPalindrome(string s) {
    return s == isRev(s);
}

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name is: " << name << endl;
    cout << "Length: " << name.length() << endl;

    string reversedName = isRev(name);
    cout << "Reversed name: " << reversedName << endl;

    if (checkPalindrome(name)) {
        cout << "It is a Palindrome." << endl;
    } else {
        cout << "It is not a Palindrome." << endl;
    }

    return 0;
}
