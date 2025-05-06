//using Recursive

#include<iostream>
using namespace std;

/*
1 2 3 4 5
0 1 2 3 4
*/

bool isSorted(int arr[],int n){
    
    if(n == 0 || n == 1){
        return true;
    }
    
    if(arr[0]>arr[1]){
        return false;
    }
    
    return isSorted(arr+1,n-1);
}


int main(){
    int n = 5;
    int arr[5] = {1,2,6,4,5};
    
    bool check = isSorted(arr,n);
    
    cout << (check ? "Sorted" : "Not Sorted") << endl;

    
    return check;
}
