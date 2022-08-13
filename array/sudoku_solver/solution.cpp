#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  bool solve(vector<vector<char>>& board, int i, int j, unordered_map<string, unordered_set<char>>& m) {
    // cout << i << " " << j << " " << (i / 3 * 3 + j / 3) << "\n";
    // >= 9, find the solution
    if (i < 9) {
      // Update the board (initial value or the value we try)
      if (board[i][j] == '.') {
        string rowKey = "R" + to_string(i);
        string colKey = "C" + to_string(j);
        string subSquareKey = "S" + to_string(i / 3 * 3 + j / 3);

        // Need to try a value and backtrack
        for (int k = 49; k <= 57; k++) {
          // k is the value we want to try
          if (m[rowKey].find(k) == m[rowKey].end() &&
              m[colKey].find(k) == m[colKey].end() &&
              m[subSquareKey].find(k) == m[subSquareKey].end()) {
            m[rowKey].insert(k);
            m[colKey].insert(k);
            m[subSquareKey].insert(k);
            board[i][j] = k;

            // Try the next value
            int newI = i;
            int newJ = j;
            newJ ++;
            if (newJ == 9) {
              newJ = 0;
              newI ++;
            }
            // If solve the board, then no longer need to backtrack
            if (solve(board, newI, newJ, m)) {
              return true;
            }

            // Backtrack
            m[rowKey].erase(k);
            m[colKey].erase(k);
            m[subSquareKey].erase(k);
            board[i][j] = '.';
          }
        }
        return false;
      } else {
        j ++;
        if (j == 9) {
          j = 0; 
          i ++;
        }
        return solve(board, i, j, m);
      }
    } else {
      return true;
    }
  }

public:
  void solveSudoku(vector<vector<char>>& board) {
    unordered_map<string, unordered_set<char>>m;
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        if (board[i][j] != '.') {
          string rowKey = "R" + to_string(i);
          string colKey = "C" + to_string(j);
          string subSquareKey = "S" + to_string(i / 3 * 3 + j / 3);
          m[rowKey].insert(board[i][j]);
          m[colKey].insert(board[i][j]);
          m[subSquareKey].insert(board[i][j]);
        }
      }
    }
    solve(board, 0, 0, m);
  }
};