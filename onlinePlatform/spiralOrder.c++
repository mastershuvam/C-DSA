#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rowSize = matrix.size();
        int colSize = matrix[0].size();

        int total = rowSize * colSize;
        int cnt = 0;

        int startRow = 0, startCol = 0, endRow = rowSize - 1, endCol = colSize - 1;

        while (cnt < total) {
            // Traverse right across the top row
            for (int col = startCol; col <= endCol && cnt < total; col++) {
                ans.push_back(matrix[startRow][col]);
                cnt++;
            }
            startRow++;

            // Traverse down the right column
            for (int row = startRow; row <= endRow && cnt < total; row++) {
                ans.push_back(matrix[row][endCol]);
                cnt++;
            }
            endCol--;

            // Traverse left across the bottom row (if valid)
            if (startRow <= endRow) {
                for (int col = endCol; col >= startCol && cnt < total; col--) {
                    ans.push_back(matrix[endRow][col]);
                    cnt++;
                }
                endRow--;
            }

            // Traverse up the left column (if valid)
            if (startCol <= endCol) {
                for (int row = endRow; row >= startRow && cnt < total; row--) {
                    ans.push_back(matrix[row][startCol]);
                    cnt++;
                }
                startCol++;
            }
        }

        return ans;
    }
};

int main() {
    // Taking user input for matrix dimensions
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    // Initialize the matrix with user input
    vector<vector<int>> matrix(row, vector<int>(col));

    cout << "Enter the elements of the matrix row by row:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matrix[i][j];
        }
    }

    // Create an instance of the Solution class and call spiralOrder
    Solution solution;
    vector<int> result = solution.spiralOrder(matrix);

    // Output the result
    cout << "Spiral order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
