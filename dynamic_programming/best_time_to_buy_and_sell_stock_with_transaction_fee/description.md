## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## Problem
You are given an array `prices` where `prices[i]` is the price of a given stock on the `ith` day, and an integer `fee` representing a transaction fee.

Find the maximum profit you can achieve. You may complete as many transactions as you like, but you need to pay the transaction fee for each transaction.

Note: you may not engage in multiple transactions simultaneously (i.e. you must sell the stock before you buy again).

## Example:
```
Input: prices = [1, 3, 2, 8, 4, 9], fee = 2
Output: 8
Explanation: The maximum profit can be achieved by:
- buying at prices[0] = 1
- selling at prices[3] = 8
- buying at prices[4] = 4
- selling at prices[5] = 9
Thus the total profit is (8 - 1) - 2 + (9 - 4) - 2 = 8
```

## General Idea:
Let `dp[i][0]` represents the maximum profit you can acheive with holding a stock on `ith day` and `dp[i][1]` represents the maximum profit you can acheive without holding a stock on `ith day`. The maximum profit including the prices to buy the stock. Thus, on the first day, we know that `dp[0][0]` = 0 - prices to buy the stock on day i = -prices[0] and `dp[0][1] = 0`. At the end, the maximum profits = `max(dp[n - 1][0], dp[n - 1][1])`. For any `ith day`, we know that:
- If we choose to hold a stock = hold a stock from previous day or buy a stock on today. Thus `dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i])`
- If we choose not to hold a stock = not buying today's stock and not holding stock from previous day or sell the stock we hold from previous day at today's price. Thus `dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prcies[i] - fee)`.

Notice, for each dp, we only need previous value. This means we no longer need 1D array to hold and instead we can solve this problem with constant space.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
