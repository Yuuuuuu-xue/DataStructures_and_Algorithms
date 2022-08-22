#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int maxProfit(vector<int>& prices) {
    int holdFirst = -prices[0];
    int notHoldFirst = 0;
    int holdSecond = INT_MIN;
    int notHoldSecond = 0;
    for (int i = 1; i < prices.size(); i++) {
      int temp1 = holdFirst;
      int temp2 = holdSecond;
      holdFirst = max(holdFirst, -prices[i]);
      holdSecond = max(holdSecond, notHoldFirst - prices[i]);
      notHoldFirst = max(notHoldFirst, temp1 + prices[i]);
      notHoldSecond = max(notHoldSecond, temp2 + prices[i]);
    }
    return max(notHoldFirst, notHoldSecond);
  }
}; 