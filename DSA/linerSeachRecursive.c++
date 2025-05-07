/*

q-> liner search using Recursive

0 1 2 3 4
1 2 3 4 5    t = 4

//base case

if(arr[0]==t){
    return true;
}

linerSeach(arr+1,t);



*/

#include<iostream>
using namespace std;

bool linearSearch(int arr[],int n,int t){
    if(n==0){
        return false;
    }
    
    if(arr[0]==t){
        return true;
    }
    
    return linearSearch(arr+1,n-1,t);

}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int t = 7;
    int size = sizeof(arr) / sizeof(arr[0]);

    if (linearSearch(arr, size, t))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
