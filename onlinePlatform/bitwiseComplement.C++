//5->101->010=2
//~5->101->010
//now explain
/*
5=>101->00000000.....0000101
~5=>010->11111111.....111010
        (11111111.....111)ignore this part

now 

if we do
~n & mask
1111111.....111010 -> ~n
0000000.....000111 -> mask
...................
0000000.....000010 -> ans


1st step create mask
n = m
m = 000000101

                mask = (mask<<1) | 1   1|0 = 1

m >> 1 = 000000101 -> 1 time        00000000001
m >> 1 = 000000010 -> 2nd time.     00000000011
m >> 1 = 000000001 -> 3rd           00000000111 -> mask
m >> 1 = 000000000 - n==0

*/

#include <iostream>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        // Special case 
        if (n == 0) {
            return 1;
        }

        int m = n;
        int mask = 0;

        // Step 1: Create the mask
        while (m != 0) {
            mask = (mask << 1) | 1;  // Shift mask left and add 1
            m = m >> 1;  // Right shift m to process the next bit
        }

        // Step 2: Apply bitwise NOT and mask the result
        int ans = (~n) & mask;

        return ans;
    }
};

int main() {
    Solution sol;

    int num;
    cout << "Enter a number: ";
    cin >> num;  

    int result = sol.bitwiseComplement(num);

    cout << "The bitwise complement of " << num << " is: " << result << endl;

    return 0;
}
