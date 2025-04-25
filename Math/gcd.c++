#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(a == 0) {
        return b;
    }
    if(b == 0) {
        return a;
    }
    
    while(a != b) {
        if(a < b) {
            b = b - a; 
        } else {
            a = a - b;
        }
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers to find their GCD: ";
    cin >> a >> b;

    int result = gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is: " << result << endl;

    return 0;
}
