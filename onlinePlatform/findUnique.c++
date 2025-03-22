//link-> https://www.naukri.com/code360/problems/find-unique_625159

#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans ^= arr[i];  
    }
    return ans;
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size; 

    int arr[size]; 
    cout << "Enter " << size << " elements: ";
    
    for(int i = 0; i < size; i++) {
        cin >> arr[i]; 
    }

    cout << "Unique element: " << findUnique(arr, size) << endl;  
    return 0;
}
