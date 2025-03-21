#include <iostream>
#include <climits>  
using namespace std;


//Print Array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Find Minimum
int findMin(int arr[], int n) {
    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);
    }
    return mini;
}

//Find Maximum
int findMax(int arr[], int n) {
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

//Main 
int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; 

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    printArray(arr, n);

    cout << "Minimum element: " << findMin(arr, n) << endl;
    cout << "Maximum element: " << findMax(arr, n) << endl;

    return 0;
}
