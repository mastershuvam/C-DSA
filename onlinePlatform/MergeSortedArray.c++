#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        
        // Merge in reverse order
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        
        // Copy any remaining elements from nums2
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};

int main() {
    int m, n;
    cout << "Enter the number of elements in the first array (nums1): ";
    cin >> m;
    cout << "Enter the number of elements in the second array (nums2): ";
    cin >> n;
    
    // nums1 should have enough space to hold both arrays.
    vector<int> nums1(m + n);
    vector<int> nums2(n);
    
    cout << "Enter " << m << " sorted integers for nums1:" << endl;
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }
    
    // Initialize the rest of nums1 with zeros (placeholder space).
    for (int i = m; i < m + n; i++) {
        nums1[i] = 0;
    }
    
    cout << "Enter " << n << " sorted integers for nums2:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    
    // Create an instance of Solution and merge the arrays.
    Solution sol;
    sol.merge(nums1, m, nums2, n);
    
    // Output the merged array.
    cout << "Merged array:" << endl;
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
