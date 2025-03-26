#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;
        
        for(int num:nums){
            totalSum += num;
        }
        
        for(int i = 0; i<nums.size();i++){
            if(leftSum == totalSum - leftSum - nums[i]){
                return i;
            }
            
            leftSum += nums[i];
        }
        
        return -1;
    }
};


int main() {
    Solution solution;

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Find and print the pivot index
    int result = solution.pivotIndex(nums);
    if (result != -1) {
        cout << "Pivot index: " << result << endl;
    } else {
        cout << "No pivot index found!" << endl;
    }

    return 0;
}
