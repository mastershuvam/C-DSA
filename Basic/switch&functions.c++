/*
q: total rs 1330
how many need 100 notes
how many need 50 notes
how many need 20 notes
how many need 10 notes
how many need 5 coin
how many need 1 coin

using switch case

ans:


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Total rs: ";
    cin >> n;

    int remainingNote = n; 

    cout << "Minimum notes required:\n";

    switch (remainingNote >= 100) {
        case 1:
            cout << "100 Rs notes: " << remainingNote / 100 << endl;
            remainingNote %= 100;
    }
    switch (remainingNote >= 50) {
        case 1:
            cout << "50 Rs notes: " << remainingNote / 50 << endl;
            remainingNote %= 50;
    }
    switch (remainingNote >= 20) {
        case 1:
            cout << "20 Rs notes: " << remainingNote / 20 << endl;
            remainingNote %= 20;
    }
    switch (remainingNote >= 10) {
        case 1:
            cout << "10 Rs notes: " << remainingNote / 10 << endl;
            remainingNote %= 10;
    }
    switch (remainingNote >= 5) {
        case 1:
            cout << "5 Rs coin: " << remainingNote / 5 << endl;
            remainingNote %= 5;
    }
    switch (remainingNote >= 1) {
        case 1:
            cout << "1 Rs coin: " << remainingNote / 1 << endl;
            remainingNote %= 1;
    }

    return 0;
}
*/

/*
Function
q1: calculate power


#include <iostream>
using namespace std;

// Function to calculate power (base^exponent)
int calculatePower(int base, int exponent) {
    int result = 1;

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent;
    
    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    int powerResult = calculatePower(base, exponent);

    cout << "Result: " << powerResult << endl;

    return 0;
}



q2. prime no

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false; 

    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool primeCheck = isPrime(n); 

    if (primeCheck) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}



q3. nCr

#include <iostream>
using namespace std;

// Function to calculate factorial
int fact(int n) {
    int ans = 1;
    for (int i = 1; i <= n; i++) {  
        ans *= i;
    }
    return ans;
}

// Function to calculate nCr
int nCr(int n, int r) {
    // Function calls for factorial calculations
    return fact(n) / (fact(r) * fact(n - r));  
}

int main() {
    int n, r;
    cout << "Enter n number: ";
    cin >> n;
    cout << "Enter r number: ";
    cin >> r; 

    // Function call to nCr()
    int Answer = nCr(n, r);  
    
    // Output the result
    cout << "The value of " << n << "C" << r << " is: " << Answer << endl;

    return 0;  
}

*/

