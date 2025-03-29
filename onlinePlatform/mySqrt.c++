#include <iostream>
using namespace std;

int mySqrt(int x) {
    
    if (x == 0) return 0;
    
    int start = 1;
    int end = x;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid == x / mid) {
            return mid;  
        } else if (mid < x / mid) {
            start = mid + 1;  
        } else {
            end = mid - 1;  
        }
    }
    
    return end; 
}

int main() {
    int x;
    cout << "Enter number: ";
    cin >> x;
    
    if (x < 0) {
        cout << "Error: Negative input is not allowed for square root.\n";
        return 1;  
    }
    
    int Ans = mySqrt(x);
    
    cout << "Ans: " << Ans << endl;
    return 0;
}
