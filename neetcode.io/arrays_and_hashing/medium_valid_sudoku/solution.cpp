#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  bool isValidSudoku(vector<vector<char>>& board) {
    unordered_map<string, unordered_set<char>> m;
    for (int i = 0; i < 9; i++) { 
      for (int j = 0; j < 9; j++) {
        if (board[i][j] != '.') {
          string subboxKey = "S" + to_string(j / 3 + i / 3 * 3);
          string rowKey = "R" + to_string(i);
          string colKey = "C" + to_string(j);
          if (m[rowKey].find(board[i][j]) != m[rowKey].end()) return false;
          if (m[colKey].find(board[i][j]) != m[colKey].end()) return false;
          if (m[subboxKey].find(board[i][j]) != m[subboxKey].end()) return false;
          m[rowKey].insert(board[i][j]);
          m[colKey].insert(board[i][j]);
          m[subboxKey].insert(board[i][j]);
        }
      }
    }
    return true;
  }
};