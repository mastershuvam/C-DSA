/*
  link:->https://www.naukri.com/code360/problems/reverse-the-array_1262298
*/

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int m) {
    int s = m + 1;
    int e = arr.size() - 1;

    while (s <= e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n, m;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the index m (reverse will start from m+1): ";
    cin >> m;

    if (m < 0 || m >= n - 1) {
        cout << "Invalid value of m. It should be in range 0 to " << n - 2 << "." << endl;
        return 1;
    }

    reverseArray(arr, m);

    cout << "Array after reversal: ";
    printArray(arr);

    return 0;
}
