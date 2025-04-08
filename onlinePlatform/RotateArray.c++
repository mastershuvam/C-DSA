#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to rotate the array to the right by k steps
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Handle cases where k > n

    // Step 1: Reverse the whole array
    reverse(nums.begin(), nums.end());

    // Step 2: Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);

    // Step 3: Reverse the rest
    reverse(nums.begin() + k, nums.end());
}

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter number of rotations (k): ";
    cin >> k;

    rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
