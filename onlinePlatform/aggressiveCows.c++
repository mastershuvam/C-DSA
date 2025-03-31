/*
  link- >https://www.naukri.com/code360/problems/aggressive-cows_1082559
*/


#include <bits/stdc++.h>
using namespace std;

// Function to check if we can place 'k' cows with at least 'minDist' distance
bool canPlaceCows(vector<int> &stallPositions, int cowCount, int minDist) {
    int placedCows = 1;  // First cow placed at first stall
    int lastPlacedPos = stallPositions[0];

    for (int i = 1; i < stallPositions.size(); i++) {
        if (stallPositions[i] - lastPlacedPos >= minDist) {
            placedCows++;
            lastPlacedPos = stallPositions[i];

            if (placedCows == cowCount) return true; // Successfully placed all cows
        }
    }
    return false; // Not possible with this 'minDist'
}

// Function to find the maximum minimum distance between cows
int findMaxMinDistance(vector<int> &stallPositions, int cowCount) {
    sort(stallPositions.begin(), stallPositions.end()); // Sorting stalls

    int low = 1; // Minimum possible distance
    int high = stallPositions.back() - stallPositions.front(); // Maximum possible distance
    int maxDist = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canPlaceCows(stallPositions, cowCount, mid)) {
            maxDist = mid; // Update answer
            low = mid + 1; // Try for a larger minimum distance
        } else {
            high = mid - 1; // Try for a smaller minimum distance
        }
    }
    return maxDist;
}

// Main function to take user input and display output
int main() {
    int numStalls, numCows;
    cout << "Enter number of stalls: ";
    cin >> numStalls;

    vector<int> stallPositions(numStalls);
    cout << "Enter stall positions: ";
    for (int i = 0; i < numStalls; i++) {
        cin >> stallPositions[i];
    }

    cout << "Enter number of cows: ";
    cin >> numCows;

    int result = findMaxMinDistance(stallPositions, numCows);
    cout << "Maximum minimum distance between cows: " << result << endl;

    return 0;
}
