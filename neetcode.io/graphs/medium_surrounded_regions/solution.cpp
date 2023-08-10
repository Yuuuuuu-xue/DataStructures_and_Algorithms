#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

  void bfs(vector<vector<char>>& board, int i, int j, unordered_set<int>& seen) {
    int n = board.size();
    int m = board[0].size();
    deque<int> dq;
    dq.push_back(i * m + j);
    seen.insert(i * m + j);
    while(dq.size() > 0) {
      int curr = dq.front();
      int currX = curr / m;
      int currY = curr % m;
      dq.pop_front();

      // Loop over each its neighbor
      for(vector<int>& dir : directions) {
        int x = currX + dir[0];
        int y = currY + dir[1];
        if (x >= 0 && x < n && y >= 0 && y < m && board[x][y] == 'O' && seen.find(x * m + y) == seen.end()) {
          seen.insert(x * m + y);
          dq.push_back(x * m + y);
        }
      }
    }
  }
  
  void solve(vector<vector<char>>& board) {
    int n = board.size();
    int m = board[0].size();
    unordered_set<int> seen;
    // Run bfs for first row and last row
    for (int j = 0; j < m; j++) {
      // First row
      if (board[0][j] == 'O' && seen.find(j) == seen.end()) {
        bfs(board, 0, j, seen);
      }
      // Last row
      if (board[n - 1][j] == 'O' && seen.find((n - 1) * m + j) == seen.end()) {
        bfs(board, n - 1, j, seen);
      }
    }

    // Run bfs for first col and last col
    for (int i = 0; i < n; i++) {
      // First col
      if (board[i][0] == 'O' && seen.find(i * m) == seen.end()) {
        bfs(board, i, 0, seen);
      }
      // Last col
      if (board[i][m - 1] == 'O' && seen.find(i * m + m - 1) == seen.end()) {
        bfs(board, i, m - 1, seen);
      }
    }

    // Loop over the board, any O that is not in seen, we can convert them into X
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (board[i][j] == 'O' && seen.find(i * m + j) == seen.end()) {
          board[i][j] = 'X';
        }
      }
    }
  }
};