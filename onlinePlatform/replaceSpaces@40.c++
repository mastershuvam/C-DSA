#include <bits/stdc++.h>
using namespace std;

string replaceSpaces(string &str){
    string res = "";
    for(char &s : str){
        if(s == ' '){
            res += "@40";
        } else {
            res += s;
        }
    }
    return res;
}

int main() {
    string input;

    
    cout << "Enter a string with spaces: ";
    getline(cin, input);  

    string replaced = replaceSpaces(input);
    
    cout << "After replacing spaces with @40: " << replaced << endl;

    return 0;
}
