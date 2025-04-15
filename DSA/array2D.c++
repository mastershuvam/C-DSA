#include <iostream>
using namespace std;

// Function to print the sum of each row
void rowSum(int a[3][4]) {
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += a[i][j];  // Corrected to add the actual element, not 'i'
        }
        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }
}

// Function to search for a target element in the 2D array
bool isFind(int a[3][4], int target) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (a[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int a[3][4];  // 2D array declaration

    // Input elements row-wise
    cout << "Enter elements row-wise (3 rows x 4 columns):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    // Overwrite elements with column-wise input
    cout << "Enter elements column-wise (4 columns x 3 rows):" << endl;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            cin >> a[i][j];
        }
    }

    // Output the final matrix
    cout << "The final matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // Call row sum function
    cout << "\nRow sums:" << endl;
    rowSum(a);

    // Search for a target element
    int target;
    cout << "\nEnter element to search: ";
    cin >> target;

    if (isFind(a, target)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
