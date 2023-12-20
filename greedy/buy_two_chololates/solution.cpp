#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int buyChoco(vector<int>& prices, int money) {
    int minPrice = min(prices[0], prices[1]);
    int secondMinPrice = max(prices[0], prices[1]);
    for (int i = 2; i < prices.size(); i++) {
      if (prices[i] < minPrice) {
        secondMinPrice = minPrice;
        minPrice = prices[i];
      } else if (prices[i] < secondMinPrice) {
        secondMinPrice = prices[i];
      }
    }

    if (minPrice + secondMinPrice > money) {
      return money;
    }
    return money - minPrice - secondMinPrice;
  }
};