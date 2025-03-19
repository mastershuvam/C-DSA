#include <iostream>
#include <climits> // for INT_MAX

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {

        int ans = 1;

        for(int i = 0;i<=30;i++){

            if(ans == n){
                return true;
            }

            if(ans < INT_MAX/2)
            
            ans = ans*2;


        }
        return false;
    }
};

int main() {
    Solution sol;
    
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (sol.isPowerOfTwo(num)) {
        cout << num << " is a power of two." << endl;
    } else {
        cout << num << " is not a power of two." << endl;
    }

    return 0;
}
