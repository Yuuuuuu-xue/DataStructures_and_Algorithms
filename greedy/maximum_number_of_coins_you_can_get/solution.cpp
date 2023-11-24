#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxCoins(vector<int>& piles) {
    sort(piles.begin(), piles.end(), [](const int a, const int b) {
      return a > b;
    });
    int o = 0;
    for (int i = 0; i < piles.size() / 3; i ++) {
      o += piles[i * 2 + 1];
    }
    return o;
  }
};