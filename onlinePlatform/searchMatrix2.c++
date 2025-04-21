#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to search for a target value in a 2D sorted matrix
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        // Start from top-right corner
        int rowIndex = 0;
        int colIndex = col - 1;

        while (rowIndex < row && colIndex >= 0) {
            int element = matrix[rowIndex][colIndex];

            if (element == target) {
                return true;
            } else if (element < target) {
                rowIndex++; // Move down
            } else {
                colIndex--; // Move left
            }
        }
        return false;
    }
};

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter elements of the matrix (row-wise):\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    Solution sol;
    bool found = sol.searchMatrix(matrix, target);

    if (found) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}
