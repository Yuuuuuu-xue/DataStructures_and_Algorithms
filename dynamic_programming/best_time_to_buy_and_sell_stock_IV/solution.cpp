#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	int maxProfit(int k, vector<int>& prices) {
		if (prices.size() == 0) return 0;
		vector<vector<pair<int, int>>> dp(prices.size(), vector<pair<int, int>>(k + 1));
		
		// Base case, since on day 0, we can only buy the stock
		for (int i = 0; i <= k; i++) dp[0][i].first = -prices[0];

		for (int i = 1; i < prices.size(); i++) {
			for (int j = 0; j <= k; j++) {
        // cout << i << " " << j << "\n";
				// Hold the stock, either
				// 1. previous day not hold the stock (at most k) + buy stock on current day
				// 2. previous day hold the stock (at most k)
				dp[i][j].first = max(dp[i - 1][j].first, dp[i - 1][j].second - prices[i]);
				// Not hold the stock, either
				// 1. previous day not hold the stock
				// 2. we sell the stock that previous day hold (k - 1)
				if (j > 0) {
					dp[i][j].second = max(dp[i - 1][j].second, dp[i - 1][j - 1].first + prices[i]);
				} else {
					// Cannot complete any transaction
					dp[i][j].second = dp[i - 1][j].second;
				}
				// cout << i << " " << j << " " << dp[i][j].first << " " << dp[i][j].second << "\n";
			}
		}

		int o = 0;
		for (int i = 0; i <= k; i++) o = max({o, dp[prices.size() - 1][i].first, dp[prices.size() - 1][i].second});
		return o;
	}
};