//leet code qestion no: 1281

#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1; 
        int sum = 0;     

        while(n != 0) {
            int rem = n % 10;  
            product = product * rem; 
            sum = sum + rem;   

            n = n / 10;
        }

       
        int ans = product - sum;
        return ans; 
    }
};


int main() {
    Solution solution;
    int n;
    
    cout<<"Enter a number: ";  
    cin>>n;
    
    cout << "The result for " << n << " is: " << solution.subtractProductAndSum(n) << endl;
    return 0;
}
