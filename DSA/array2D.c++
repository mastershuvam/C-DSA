#include <iostream>
using namespace std;

int main()
{
    int a[3][4];  

    // Input elements row-wise
    cout << "Enter elements row-wise (3 rows x 4 columns):" << endl;
  
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    // Overwrite elements with column-wise input
    cout << "Enter elements column-wise (4 columns x 3 rows):" << endl;
  
    for(int j = 0; j < 4; j++) {
        for(int i = 0; i < 3; i++) {
            cin >> a[i][j];    
        }
    }

    // Output the final matrix
    cout << "The final matrix is:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
