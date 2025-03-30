//link -> https://www.naukri.com/code360/problems/painter-s-partition-problem_1089557

#include <bits/stdc++.h>
using namespace std;

bool isPoss(vector<int> &boards, int painter, int maxBords) {
    int boardsSum = 0;
    int painterCnt = 1;

    for (int i = 0; i < boards.size(); i++) {
        if (boardsSum + boards[i] > maxBords) {
            painterCnt++;
            boardsSum = boards[i];

            if (painterCnt > painter) 
                return false;
        } else {
            boardsSum += boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k) {
    int totalSum = accumulate(boards.begin(), boards.end(), 0);
    int minVal = *max_element(boards.begin(), boards.end());
    int maxVal = totalSum;

    int ans = -1;

    while (minVal <= maxVal) {
        int mid = minVal + (maxVal - minVal) / 2;

        if (isPoss(boards, k, mid)) {
            ans = mid;
            maxVal = mid - 1;
        } else {
            minVal = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n, k;
    cout << "Enter number of boards: ";
    cin >> n;

    cout << "Enter number of painters: ";
    cin >> k;

    vector<int> boards(n);
    cout << "Enter the board lengths: ";
    for (int i = 0; i < n; i++) {
        cin >> boards[i];
    }

    int result = findLargestMinDistance(boards, k);
    cout << "Minimum time to paint all boards: " << result << endl;

    return 0;
}
