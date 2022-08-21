#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  bool isWin(short mask) { 
    for (int i = 0; i < 3; i++) {
      // Row
      if ((mask & (1 << (i * 3))) != 0 && (mask & (1 << (i * 3 + 1))) != 0 && (mask & (1 << (i * 3 + 2))) != 0) {
        return true;
      }
      // Col
      if ((mask & (1 << i)) != 0 && (mask & (1 << (i + 3))) != 0 && (mask & (1 << (i + 6))) != 0) {
        return true;
      }
    }
    // Diagonal
    if (((mask & (1 << 0)) != 0 && (mask & (1 << 4)) != 0 && (mask & (1 << 8)) != 0) || ((mask & (1 << 2)) != 0 && (mask & (1 << 4)) != 0 && (mask & (1 << 6)) != 0)) {
      return true;
    }
    return false;
  }

public:
  string tictactoe(vector<vector<int>>& moves) {
    short mask1 = 0;
    short mask2 = 0;
    
    // Build the board
    for (int i = 0; i < moves.size(); i++) {
      if (i % 2 == 0) mask1 |= 1 << (moves[i][0] * 3 + moves[i][1]);
      else mask2 |= 1 << (moves[i][0] * 3 + moves[i][1]);
    }
    // cout << mask1 << " " << mask2 << "\n";
    if (isWin(mask1)) {
      return "A";
    } if (isWin(mask2)) {
      return "B";
    } else if ((mask1 | mask2) == 511) {
      return "Draw";
    } else {
      return "Pending";
    }
  }
};