#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

  bool dfs(vector<vector<char>>& board, string word, int i, int j, int level) {
    // If level matches, then we can return true
    if (word.size() == level) return true;
    // Invalid indicies
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size()) return false;
    // If visited cell or not match with word
    if (board[i][j] == '#' || board[i][j] != word[level]) return false;

    // Mark current cell as visited
    char c = board[i][j];
    board[i][j] = '#';

    // Traverse its children
    for (auto p : directions) {
      // Found the path
      if (dfs(board, word, i + p.first, j + p.second, level + 1)) {
        return true;
      }
    }
    // Backtrack and return false
    board[i][j] = c;
    return false;
  }

public:
  bool exist(vector<vector<char>>& board, string word) {
    // Run DFS for each cell
    for (int i = 0; i < board.size(); i++) {
      for (int j = 0; j < board[0].size(); j++) {
        if (dfs(board, word, i, j, 0)) return true;
      }
    }
    return false;
  }
};