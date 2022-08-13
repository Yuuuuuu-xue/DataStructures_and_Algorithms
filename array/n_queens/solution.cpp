#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  void moveQueens(int currRow, int n, unordered_map<string, bool>& m, vector<int>& queenPositions, vector<vector<string>>& o) {
    // Last row, build the board
    if (currRow >= n) {
      vector<string> board;
      for (int i = 0; i < queenPositions.size(); i++) {
        string s = "";
        for (int j = 0; j < n; j++) {
          if (j == queenPositions[i]) s += 'Q';
          else s += '.';
        }
        board.push_back(s);
      }
      o.push_back(board);
    } else {
      // Loop over each column
      for (int col = 0; col < n; col ++) {
        // If we can place a queen on i and col
        string colKey = "C" + to_string(col);
        string diagonalKey = "D" + to_string(currRow + col);
        string antiDiagonalKey = "A" + to_string(currRow - col);

        if (!m[colKey] && !m[diagonalKey] && !m[antiDiagonalKey]) {
          // Place a queen
          m[colKey] = true;
          m[diagonalKey] = true;
          m[antiDiagonalKey] = true;
          queenPositions.push_back(col);
          
          // Move to the next row
          moveQueens(currRow + 1, n, m, queenPositions, o);

          // Backtrack, remove the current position
          m[colKey] = false;
          m[diagonalKey] = false;
          m[antiDiagonalKey] = false;
          queenPositions.pop_back();
        }
      }
    }
  }

public:
  vector<vector<string>> solveNQueens(int n) {
    vector<int> queenPositions;
    vector<vector<string>> o;
    unordered_map<string, bool> m;
    moveQueens(0, n, m, queenPositions, o);
    return o;
  }
};