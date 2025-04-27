#include <iostream>
#include <vector>
using namespace std;

vector<long long> dp(1000, -1);

long long catalan(int n) {
    if (n <= 1) return 1;
    if (dp[n] != -1) return dp[n];
    
    long long res = 0;
    for (int i = 0; i < n; i++) {
        res += catalan(i) * catalan(n - i - 1);
    }
    return dp[n] = res;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    
    cout << "Catalan Number C_" << n << " = " << catalan(n) << endl;
    
    return 0;
}
