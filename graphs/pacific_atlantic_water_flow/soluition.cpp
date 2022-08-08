#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  unordered_set<int> bfs(vector<vector<int>> heights, queue<vector<int>> q, vector<vector<int>> directions) {
    unordered_set<int> s;
    while (!q.empty()) {
      vector<int> coor = q.front();
      q.pop();
      s.insert(coor[0] * heights[0].size() + coor[1]);
      
      // Loop over neigbors
      for (vector<int> direction : directions) {
        int x = coor[0] + direction[0];
        int y = coor[1] + direction[1];
        // If valid index and water can flow into coor and we haven't visited this cell yet
        if (x >= 0 && x < heights.size() && y >= 0 && y < heights[0].size() && heights[coor[0]][coor[1]] <= heights[x][y] && s.find(x * heights[0].size() + y) == s.end()) {
          q.push({ x, y });
        }
      }
    }
    return s;
  } 

public:
  vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
    queue<vector<int>> pacificQ;
    queue<vector<int>> atlanticQ;
    int n = heights[0].size();

    // Add top row to Pacific queue and bottom row to Atlantic queue
    for (int j = 0; j < n; j++) {
      pacificQ.push({ 0, j });
      atlanticQ.push({ (int)heights.size() - 1, j });
    }
    // Add left and right row
    for (int i = 0; i < heights.size(); i++) {
      pacificQ.push({ i, 0 });
      atlanticQ.push({ i, n - 1 });
    }

    vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    // Get the coordinates
    unordered_set<int> p = bfs(heights, pacificQ, directions);
    unordered_set<int> a = bfs(heights, atlanticQ, directions);

    // Build the final solution by finding the intersection
    vector<vector<int>> o;
    for (int c : p) {
      // Intersection
      if (a.find(c) != a.end()) {
        o.push_back({ c / n, c % n });
      }     
    }
    return o;
  }
};
