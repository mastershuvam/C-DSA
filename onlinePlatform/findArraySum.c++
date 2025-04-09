/*
link-> https://www.naukri.com/code360/problems/sum-of-two-arrays_893186
*/


#include <bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int k = 0;
    int l = 0;

    for(int i = 0; i < n; i++) {
        k = 10 * k + a[i];
    }

    for(int i = 0; i < m; i++) {
        l = 10 * l + b[i];
    }

    int totalSum = k + l;
    vector<int> ans;

    if (totalSum == 0) {
        ans.push_back(0);
        return ans;
    }

    while (totalSum > 0) {
        ans.insert(ans.begin(), totalSum % 10);
        totalSum /= 10;
    }

    return ans;
}

int main() {
    int n, m;
    cout << "Enter the number of digits in first number: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter the digits of the first number (space separated): ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the number of digits in second number: ";
    cin >> m;

    vector<int> b(m);
    cout << "Enter the digits of the second number (space separated): ";
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    vector<int> result = findArraySum(a, n, b, m);

    cout << "Sum = ";
    for(int digit : result) {
        cout << digit;
    }
    cout << endl;

    return 0;
}
