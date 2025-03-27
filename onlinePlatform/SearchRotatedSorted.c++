//Search In Rotated Sorted Array

#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int n, int k) {
    int s = 0, e = n - 1;

    while (s <= e) {
        int mid = (s + e) / 2;

        // If mid is the target
        if (arr[mid] == k) return mid;

        // Check if left half is sorted
        if (arr[s] <= arr[mid]) {
            if (arr[s] <= k && k < arr[mid]) {
                e = mid - 1; // Search in left half
            } else {
                s = mid + 1; // Search in right half
            }
        }
        // Right half is sorted
        else {
            if (arr[mid] < k && k <= arr[e]) {
                s = mid + 1; // Search in right half
            } else {
                e = mid - 1; // Search in left half
            }
        }
    }

    return -1; // If not found
}

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of rotated sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target element: ";
    cin >> k;

    int index = search(arr, n, k);
    
    if (index != -1) {
        cout << "Index of " << k << " is: " << index << endl;
    } else {
        cout << k << " not found in the array." << endl;
    }

    return 0;
}
