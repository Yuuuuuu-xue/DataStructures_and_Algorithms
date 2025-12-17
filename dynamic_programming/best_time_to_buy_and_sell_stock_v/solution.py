from typing import List
from functools import lru_cache 

class Solution:
    @lru_cache(maxsize=10000)
    def solve(self, i, k, t):
        if i == len(self.prices):
            if t == 0:
                # No transaction
                return 0
            else:
                # Ongoing transaction
                return float('-inf')
        if k == 0 and t == 0:
            # k == 0 means no transaction left and we cannot start a new transaction
            return 0
        
        profit = float('-inf')
        if t == 0:
            # no transaction
            # We can skip, start a new normal transaction, start a new short selling transaction
            # Skip
            profit = max(profit, self.solve(i + 1, k, 0))
            # Start a new normal transaction, need to buy on day i
            profit = max(profit, -self.prices[i] + self.solve(i + 1, k - 1, 1))
            # Start a new short selling transaction, can sell on day i
            profit = max(profit, self.prices[i] + self.solve(i + 1, k - 1, 2))
        elif t == 1:
            # normal transaction
            # we can skip or sell it
            # Skip
            profit = max(profit, self.solve(i + 1, k, 1))
            # Sell it on day i
            profit = max(profit, self.prices[i] + self.solve(i + 1, k, 0))
        else:
            # short selling transaction
            # we need to buy it back
            # Skip
            profit = max(profit, self.solve(i + 1, k, 2))
            # Buy it back
            profit = max(profit, -self.prices[i] + self.solve(i + 1, k, 0))
        
        return profit

    def maximumProfit(self, prices: List[int], k: int) -> int:
        self.prices = prices
        return self.solve(0, k, 0)
