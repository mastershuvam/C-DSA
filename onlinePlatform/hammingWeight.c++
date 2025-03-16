//leet code question no: 191

#include <iostream>
#include <bitset>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;

        while(n != 0) {
            if(n & 1) { // 1&1 = 1
                count++;
            }
            n = n >> 1; // Right shift
        }

        return count; 
    }
};

int main() {
    Solution solution; 
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    int result = solution.hammingWeight(n);

    cout << "The number of 1 bits in the binary representation of " << n << " is: " << result << endl;

    return 0;
}
