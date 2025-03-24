#include <bits/stdc++.h> 
using namespace std;

void sort012(vector<int> &arr, int n) {
    int start = 0, mid = 0, end = n - 1;

    while (mid <= end) {
        if (arr[mid] == 0) {
            swap(arr[mid], arr[start]);
            start++;
            mid++;
        } 
        else if (arr[mid] == 1) {
            mid++;
        } 
        else {  
            swap(arr[mid], arr[end]);
            end--;
        }
    }
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);  
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort012(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
