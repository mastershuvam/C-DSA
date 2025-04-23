#include <iostream>
using namespace std;

// Efficient modular exponentiation
long long modularExponentiation(long long x, long long n, long long m) {
    long long result = 1;
    x = x % m;

    while (n > 0) {
        if (n % 2 == 1)
            result = (result * x) % m;

        x = (x * x) % m;
        n = n / 2;
    }

    return result;
}

int main() {
    int T;
    cout << "Enter number of test cases: ";
    cin >> T;

    for (int i = 1; i <= T; ++i) {
        long long X, N, M;
        cout << "\nTest Case " << i << ":\n";
        cout << "Enter X (base): ";
        cin >> X;
        cout << "Enter N (exponent): ";
        cin >> N;
        cout << "Enter M (modulo): ";
        cin >> M;

        long long result = modularExponentiation(X, N, M);
        cout << "Result of (" << X << "^" << N << ") % " << M << " = " << result << "\n";
    }

    return 0;
}
