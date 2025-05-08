#include<iostream>
#include<vector>
using namespace std;


void bubleSort(vector<int>&arr,int n){
    
    if(n == 0 || n == 1){
        return ;
    }
    
    for(int i =0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    
    
    bubleSort(arr,n-1);
    
    
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bubleSort(arr,n);

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
