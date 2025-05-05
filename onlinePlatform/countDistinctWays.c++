#include <iostream>
using namespace std;

long long countDistinctWays(int nStairs) {
    // Base cases
    if(nStairs < 0) return 0;
    if(nStairs == 0) return 1;

    // Recursive relation
    return countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
}

int main() {
    int n;  // test case
    cout<<"enter a no : ";
    cin>>n;
    long long ways = countDistinctWays(n);
    cout << "Number of distinct ways to climb " << n << " stairs: " << ways << endl;
    return 0;
}
