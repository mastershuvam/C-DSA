/*

q-> binary search using recursion

0 1 2 3 4
1 2 3 4 5

//base case
if(s>e){
    return false;
}


mid = s+(s-e)/2;

if(arr[mid]==t){
    return true;
}

if(arr[mid]==t){
    return true;
}else if(arr[mid]<t){
    return binarySearch(arr,mid+1,e,t);
}else{
    return binarySearch(arr,s,mid-1,t);
}
*/

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int t){
    if(s>e){
        return false;
    }
    
    int mid = s+(e-s)/2;
    
    if(arr[mid]==t){
        return true;
    }else if(arr[mid]<t){
        return binarySearch(arr,mid+1,e,t);
    }else{
        return binarySearch(arr,s,mid-1,t);
    }

}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    if (binarySearch(arr, 0, n - 1, target))
        cout << "Found";
    else
        cout << "Not Found";

}
