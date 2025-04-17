//link:-https://www.naukri.com/code360/problems/print-like-a-wave_893268

#include <bits/stdc++.h>
using namespace std;

// Function to perform wave print
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
    vector<int> ans;

    for (int col = 0; col < mCols; col++) {
        if (col & 1) {
            // odd column: bottom to top
            for (int row = nRows - 1; row >= 0; row--) {
                ans.push_back(arr[row][col]);
            }
        } else {
            // even column: top to bottom
            for (int row = 0; row < nRows; row++) {
                ans.push_back(arr[row][col]);
            }
        }
    }

    return ans;
}

int main() {
    int nRows, mCols;
    cout << "Enter number of rows and columns: ";
    cin >> nRows >> mCols;

    vector<vector<int>> arr(nRows, vector<int>(mCols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < nRows; i++) {
        for (int j = 0; j < mCols; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> result = wavePrint(arr, nRows, mCols);

    cout << "Wave Print of the matrix is: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
