#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSafe(int x, int y, vector<vector<int>>& maze, vector<vector<int>>& visited, int n) {
        return (x >= 0 && x < n && y >= 0 && y < n && visited[x][y] == 0 && maze[x][y] == 1);
    }

    void solve(vector<vector<int>>& maze, int n, int x, int y,
               vector<vector<int>>& visited, vector<string>& ans, string path) {
        // base case
        if (x == n - 1 && y == n - 1) {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // Down
        int newX = x + 1;
        int newY = y;
        if (isSafe(newX, newY, maze, visited, n)) {
            path.push_back('D');
            solve(maze, n, newX, newY, visited, ans, path);
            path.pop_back();
        }

        // Up
        newX = x - 1;
        newY = y;
        if (isSafe(newX, newY, maze, visited, n)) {
            path.push_back('U');
            solve(maze, n, newX, newY, visited, ans, path);
            path.pop_back();
        }

        // Left
        newX = x;
        newY = y - 1;
        if (isSafe(newX, newY, maze, visited, n)) {
            path.push_back('L');
            solve(maze, n, newX, newY, visited, ans, path);
            path.pop_back();
        }

        // Right
        newX = x;
        newY = y + 1;
        if (isSafe(newX, newY, maze, visited, n)) {
            path.push_back('R');
            solve(maze, n, newX, newY, visited, ans, path);
            path.pop_back();
        }

        visited[x][y] = 0; // Backtrack
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;
        int n = maze.size();
        if (maze[0][0] == 0) return ans;

        vector<vector<int>> visited(n, vector<int>(n, 0));
        string path = "";
        solve(maze, n, 0, 0, visited, ans, path);
        sort(ans.begin(), ans.end()); // Optional, for lexicographical order
        return ans;
    }
};

// Main function for testing
int main() {
    Solution sol;

    int n;
    cout << "Enter size of maze (n x n): ";
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));
    cout << "Enter the maze (each cell 0 or 1):\n";

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> maze[i][j];

    vector<string> result = sol.ratInMaze(maze);

    if (result.empty()) {
        cout << "No path exists from (0,0) to (" << n-1 << "," << n-1 << ").\n";
    } else {
        cout << "Paths from (0,0) to (" << n-1 << "," << n-1 << "):\n";
        for (string path : result) {
            cout << path << "\n";
        }
    }

    return 0;
}
