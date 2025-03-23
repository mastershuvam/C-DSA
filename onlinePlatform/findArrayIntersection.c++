#include <iostream>
#include <vector>
using namespace std;


vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int>ans;
	int i = 0;
	int j = 0;

	while(i<n && j<m){
		if(arr1[i]<arr2[j]){
			i++;
		}else if(arr1[i]>arr2[j]){
			j++;
		}else{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
	}

	return ans;
}

int main(){
    int n;
    cout << "Enter array1 size: ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    vector<int> arr1(n);
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    int m;
    cout << "Enter array2 size: ";
    cin >> m;
    cout << "Enter " << m << " elements: ";
    vector<int> arr2(m);
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }

    cout << "Intersection: ";

    vector<int> ans = findArrayIntersection(arr1, n, arr2, m);
    for(int i = 0; i < ans.size(); i++){
        cout<< ans[i] << " ";
    }
    cout << endl;
    return 0;
}
