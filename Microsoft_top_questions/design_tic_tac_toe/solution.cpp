#include <bits/stdc++.h>

using namespace std;

class TicTacToe {
private:
  int n;
  int curr;
  unordered_map<int, int> m;

  int helper(int key, int p) {
    if (m.find(key) != m.end()) {
      if((m[key] > 0 && p < 0) || (m[key] < 0 && p > 0)) m.erase(key);
      else {
        m[key] += p;
        if (m[key] == n) return 1;
        if (-m[key] ==n) return 2;
      }
    }
    return 0;
  }

public:
  TicTacToe(int n) {
    this->n = n;
    curr = 0;
    m.clear();
    for (int i = 0; i < 2 * n + 2; i++) m[i] = 0;
  }
  
  int move(int row, int col, int player) {
    curr ++;
    int p = player == 1 ? player : -1;
    int temp = helper(row, p);
    if (temp > 0) return temp;
    temp = helper(n + col, p);
    if (temp > 0) return temp;
    if (row == col) temp = helper(2 * n, p);
    if (temp > 0) return temp;
    if (row + col == n - 1) return helper(2 * n + 1, p);
    return 0;
  }
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */