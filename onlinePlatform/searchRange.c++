#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1); 

        int start = 0;
        int end = nums.size()-1;

        // Finding first occurrence
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                ans[0] = mid;
                end = mid - 1;  // Continue searching left
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        start = 0;
        end = nums.size()-1;

        // Finding last occurrence
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                ans[1] = mid;
                start = mid + 1;  // Continue searching right
            } else if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    int n, target;
    
    // Taking input
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << "Enter the target number: ";
    cin >> target;

    Solution sol;
    vector<int> result = sol.searchRange(nums, target);

    // Output
    cout << "First and last occurrence of " << target << " is: [" 
         << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
