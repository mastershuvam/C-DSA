#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

void binarySearch(vector<int>& nums, int key) {
    sort(nums.begin(), nums.end()); 
    
    int start = 0;
    int end = nums.size() - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == key) {  
            cout << "Element found " << endl;
            return;
        } 
        else if (nums[mid] > key) {
            end = mid - 1;
        } 
        else {
            start = mid + 1;
        }
    }

    cout << "Element not found" << endl;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    binarySearch(arr, key);

    return 0;
}
