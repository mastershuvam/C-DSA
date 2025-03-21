#include <iostream>
#include <climits>  
using namespace std;

// Swap Alternate Elements
void swapAlternate(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {  
        swap(arr[i], arr[i + 1]);
    }
}

// Reverse Array (In-place)
void revArray(int arr[], int n) {  
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Linear Search
bool linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

// Sum of Array Elements
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Print Array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Find Minimum
int findMin(int arr[], int n) {
    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);
    }
    return mini;
}

// Find Maximum
int findMax(int arr[], int n) {
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

// Main Function
int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; 

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, n);

    cout << "Minimum element: " << findMin(arr, n) << endl;
    cout << "Maximum element: " << findMax(arr, n) << endl;

    int sumAns = sumArray(arr, n);
    cout << "Sum of array elements: " << sumAns << endl;

    // Swap Alternate Elements
    swapAlternate(arr, n);
    cout << "Array after swapping alternate elements: ";
    printArray(arr, n);

    // Reverse and Print Array
    revArray(arr, n);
    cout << "Reversed array: ";
    printArray(arr, n);

    // Linear Search - User Input
    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    if (linearSearch(arr, n, target)) {
        cout << target << " is found in the array!" << endl;
    } else {
        cout << target << " is not found in the array!" << endl;
    }

    return 0;
}
