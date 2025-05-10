/*
...........
Merge Sort 
...........

# Description

Merge Sort is a **divide-and-conquer** algorithm that:
- Divides the array into halves recursively,
- Sorts each half,
- Then merges the sorted halves.

Time Complexity:  
- **Best / Average / Worst Case:** `O(n log n)`  
- **Space Complexity:** `O(n)` (due to temporary storage used for merging)

---

*/



#include <iostream>
#include <vector>
using namespace std;

// Merge function to combine two sorted halves
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp; // Temporary array to store merged result
    int i = left;     // Pointer for left half
    int j = mid + 1;  // Pointer for right half

    // Merge both halves into temp[]
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }

    // Copy any remaining elements from left half
    while (i <= mid) temp.push_back(arr[i++]);

    // Copy any remaining elements from right half
    while (j <= right) temp.push_back(arr[j++]);

    // Copy back the merged elements to original array
    for (int k = left; k <= right; ++k)
        arr[k] = temp[k - left];
}

// Recursive Merge Sort function
void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return; // Base case: one element

    int mid = left + (right - left) / 2;

    // Recursively sort left and right halves
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Merge sorted halves
    merge(arr, left, mid, right);
}

// Main function
int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
