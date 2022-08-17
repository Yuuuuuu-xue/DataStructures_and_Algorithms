#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxProfit(vector<int>& prices, int fee) {
    int hold = -prices[0];
    int notHold = 0;
    for (int i = 1; i < prices.size(); i++) {
      int temp = hold;
      hold = max(hold, notHold - prices[i]);
      notHold = max(notHold, temp + prices[i] - fee);
    }
    return max(hold, notHold);
  }
};