#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate how much wood we get if we cut at height H
long long getWood(const vector<int>& trees, int H) {
    long long totalWood = 0;
    for (int height : trees) {
        if (height > H) {
            totalWood += (height - H);
        }
    }
    return totalWood;
}

int main() {
    int N;
    long long M;
    cin >> N >> M;
    vector<int> trees(N);
    
    for (int i = 0; i < N; i++) {
        cin >> trees[i];
    }
    
    // Binary search on the height H
    int left = 0, right = *max_element(trees.begin(), trees.end());
    int result = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long woodCollected = getWood(trees, mid);
        
        if (woodCollected >= M) {
            result = mid; // Try to raise the sawblade
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    cout << result << endl;
    return 0;
}
