#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                cnt++;
            }
        }

        return cnt <= 1;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    Solution sol;
    bool result = sol.check(nums);

    if (result) {
        cout << "The array is a sorted and rotated array." << endl;
    } else {
        cout << "The array is NOT a sorted and rotated array." << endl;
    }

    return 0;
}
