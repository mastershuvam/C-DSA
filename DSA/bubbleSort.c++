/*
    * Bubble Sort in C++
    * Time Complexity: O(n^2)
    * Space Complexity: O(1)
    * Stable Sort
    * In-place Sort
    * Comparison Sort
    * Adaptive Sort
    * Worst Case: O(n^2)
    * Best Case: O(n)
    * Average Case: O(n^2)  
*/


#include <iostream>
using namespace std;


void bubbleSort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubbleSort(arr, n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
