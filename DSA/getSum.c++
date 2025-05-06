#include<iostream>
using namespace std;

int getSum(int arr[],int n){
    
    
    if(n==0){
        return 0;
    }
    
    
    return arr[0]+arrSum(arr+1,n-1);
    
}


int main(){
    int n = 5;
    int arr[5] = {1,2,6,4,5};
    
    int sum = getSum(arr,n);
    
    cout << sum << endl;

}
