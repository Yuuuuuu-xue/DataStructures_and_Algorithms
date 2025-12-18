from typing import List

class Solution:
    def maxProfit(self, prices: List[int], strategy: List[int], k: int) -> int:
        curr_profit = 0
        for i in range(len(prices)):
            curr_profit += prices[i] * strategy[i]
        
        o = curr_profit
        # Update the window

        for i in range(k):
            # Revert stategy
            curr_profit += prices[i] * strategy[i] * -1
            if i < (k // 2):
                # First half, stategy = 0
                pass
            else:
                # Second half, stategy = 1
                curr_profit += prices[i]
        
        print(o)
        o = max(o, curr_profit)
        print(curr_profit, o)

        if k == 2:
            for i in range(1, len(prices) - k + 1):
                # Prev round: i - 1 is stategy 0, need to rollback to original
                curr_profit += prices[i - 1] * strategy[i - 1]
                # Prev round: i is strategy 1, need to rollback to stategy 0
                curr_profit -= prices[i]
                # Next round: i + 1 is original stategy, need to revert and set to stategy 1
                curr_profit += prices[i + 1] * strategy[i + 1] * -1
                curr_profit += prices[i + 1]
                o = max(o, curr_profit)
            return o

        for i in range(1, len(prices) - k + 1):
            # Window at index[i - 1] should move from stategy 0 to original
            curr_profit += prices[i - 1] * strategy[i - 1]
            # Window at index[i - 1 + k // 2 - 1] should move from stategy 0 to stategy 1
            curr_profit += prices[i - 1 + k // 2 - 1]
            # Revert stategy at index i + k
            curr_profit += prices[i + k - 1] * strategy[i + k - 1] * -1
            # Stategy at index i + k should be 1
            curr_profit += prices[i + k - 1]
            o = max(o, curr_profit)
            print(curr_profit, o)
        return o

