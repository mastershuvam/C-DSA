#include <iostream>
#include <climits>  // For INT_MAX and INT_MIN

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int newDig = 0; 

        while (x != 0) {
            int dig = x % 10;  
            
            if (newDig > INT_MAX / 10 || newDig < INT_MIN / 10) {
                return 0;  
            }
            
            newDig = newDig * 10 + dig; 
            x = x / 10; 
        }

        return newDig;  
    }
};

int main() {
    Solution sol;
    
    int num;
    cout << "Enter an integer: ";
    cin >> num;  
    
    int result = sol.reverse(num);
    
    if (result == 0) {
        cout << "Overflow occurred or invalid input." << endl;
    } else {
        cout << "Reversed number is: " << result << endl;
    }

    return 0;
}
