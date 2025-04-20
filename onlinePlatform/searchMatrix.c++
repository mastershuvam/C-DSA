#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row * col - 1;

        // Binary Search
        while (start <= end) {
            int mid = start + (end - start) / 2;
            int ele = matrix[mid / col][mid % col]; // mapping 1D mid to 2D

            if (ele == target) {
                return true;
            } else if (ele < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return false;
    }
};

int main() {
    Solution sol;
    int m, n;

    // Taking user input for matrix size
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    // Taking user input for matrix elements
    cout << "Enter elements in sorted order row-wise:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter target element to search: ";
    cin >> target;

    // Function Call
    if (sol.searchMatrix(matrix, target)) {
        cout << "Target Found!" << endl;
    } else {
        cout << "Target Not Found!" << endl;
    }

    return 0;
}
