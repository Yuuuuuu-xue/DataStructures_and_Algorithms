#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxProfit(vector<int>& prices) {
    int o = 0;
    int i = 0;
    for (int j = 1; j < prices.size(); j++) {
      if (prices[i] < prices[j]) {
        o = max(o, prices[j] - prices[i]);
      } else if (prices[i] > prices[j]) {
        i = j;
      }
    }
    return o;
  }
};