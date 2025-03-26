#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    //check array is a valid Mountain Array
    bool isMountainArray(const vector<int>& arr) {
        int n = arr.size();
        if (n < 3) return false;  // A valid mountain array must have at least 3 elements
        
        int i = 0;
        
        //strictly increasing
        while (i + 1 < n && arr[i] < arr[i + 1]) {
            i++;
        }

        // If no increase or peak is at the beginning or the end, it's not a valid mountain
        if (i == 0 || i == n - 1) {
            return false;
        }

        // Then, check if the array is strictly decreasing after the peak
        while (i + 1 < n && arr[i] > arr[i + 1]) {
            i++;
        }

        // If we've reached the end, it's a valid mountain array
        return i == n - 1;
    }

    //find the peak index in a valid Mountain Array
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;
            
            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }

        return start; // Peak index
    }
};

int main() {
    Solution solution;
    
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    // Input validation for array size
    if (n < 3) {
        cout << "Array size must be at least 3 to be a valid mountain array." << endl;
        return 0;
    }
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Check if the array is a valid mountain array
    if (solution.isMountainArray(arr)) {
        cout << "Peak index: " << solution.peakIndexInMountainArray(arr) << endl;
    } else {
        cout << "Not a valid mountain array!" << endl;
    }
    
    return 0;
}
