
#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans = 0;

    for(int i = 0;i<arr.size();i++){
        ans = ans ^ arr[i];
    }

    for(int i = 0;i<arr.size();i++){
        ans = ans ^ i;
    }
	
    return ans;
}


int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout <<"Ans: "<< findDuplicate(arr) << endl;
    return 0;
}
