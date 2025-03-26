//using binary search

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int getPivot(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        
        while(start<end){
            int mid = start+(end-start)/2;
            if(nums[mid]>=nums[0]){
                start = mid + 1;
            }else{
                end=mid;
            }
        }
        
        return start;
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

    int result = solution.getPivot(nums);
    if (result != -1) {
        cout << "Pivot : " << result << endl;
    } else {
        cout << "No pivot found!" << endl;
    }

    return 0;
}
