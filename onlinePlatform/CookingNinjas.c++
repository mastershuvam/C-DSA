#include <bits/stdc++.h>
using namespace std;

// Helper function to check if it's possible to cook M dishes within 'mid' minutes
bool isPossible(vector<int> &rank, int m, int mid) {
    int dishes = 0;
    
    // Loop through each cook
    for (int r : rank) {
        int time = 0, k = 0;
        
        // Calculate the number of dishes the cook can make within 'mid' minutes
        while (time + (k + 1) * r <= mid) {
            k++;
            time += k * r;
            dishes++;
            if (dishes >= m) return true;  // If we've cooked enough dishes, return true
        }
    }
    
    // Return true if the total number of dishes cooked is at least 'M'
    return dishes >= m;
}

// Function to find the minimum time required to cook M dishes
int minCookTime(vector<int> &rank, int m) {
    int low = 1, high = *min_element(rank.begin(), rank.end()) * (m * (m + 1)) / 2;
    int ans = high;

    // Binary search for the minimum feasible time
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (isPossible(rank, m, mid)) {
            ans = mid;
            high = mid - 1;  // Try to find a smaller time
        } else {
            low = mid + 1;  // Increase the time
        }
    }
    
    return ans;
}

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    
    // Loop through each test case
    while (t--) {
        int n, m;
        
        cout << "\nEnter the number of cooks (N) and the number of dishes (M): ";
        cin >> n >> m;
        
        vector<int> rank(n);
        cout << "Enter the ranks of " << n << " cooks: ";
        for (int i = 0; i < n; i++) {
            cin >> rank[i];
        }
        
        // Call function to calculate the minimum time
        int result = minCookTime(rank, m);
        
        // Output the result
        cout << "Minimum time required to cook " << m << " dishes: " << result << " minutes\n";
    }
    
    return 0;
}
