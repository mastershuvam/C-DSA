#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastIndex = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                nums[lastIndex] = nums[i];
                lastIndex++;
            }
        }

        for(int i = lastIndex; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution solution;
    solution.moveZeroes(nums);

    cout << "After moving zeroes: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
