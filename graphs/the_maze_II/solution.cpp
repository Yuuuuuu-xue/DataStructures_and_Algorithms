#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int shortestDistance(vector<vector<int>>& maze, vector<int>& start, vector<int>& destination) {
    unordered_map<int, int> seen;
    int m = maze.size();
    int n = maze[0].size();
    queue<pair<int, int>> q;
    q.push({start[0], start[1]});
    seen[start[0] * n + start[1]] = 0;
    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    while (!q.empty()) {
      // cout << q.front().first << " " << q.front().second << "\n";
      // Loop over its directions
      int currDist = seen[q.front().first * n + q.front().second];
      for (auto& d : directions) {
        int x = q.front().first;
        int y = q.front().second;
        int dist = currDist;
        // Move along the directions
        while (x + d.first >= 0 && x + d.first < m && y + d.second >= 0 && y + d.second < n && maze[x + d.first][y + d.second] == 0) {
          x += d.first;
          y += d.second;
          dist ++;
        }
        // cout << q.front().first << " " << q.front().second << " " << x << " " << y << " " << dist << "\n";
        // If we can visit this node
        int hashKey = x * n + y;
        if (seen.find(hashKey) == seen.end() || dist < seen[hashKey]) {
          seen[hashKey] = dist;
          q.push({x, y});
        }
      }
      q.pop();
    }

    // Return the minimum distance at the destination
    int hashKey = destination[0] * n + destination[1];
    return seen.find(hashKey) == seen.end() ? -1 : seen[hashKey];
  }
};