## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 188

## Problem
You are given an integer array `prices` where `prices[i]` is the price of a given stock onthe `ith` day, and an integer `k`.

Find the maximum profit you can achieve. You may complete at most `k` transactions.

Note: you may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

## Example:
```
Input: k = 2, prices = [2, 4, 1]
Output: 2
Explanation: Buy on day 1 (price = 2) and sell on day 2 (price = 4), profit = 4 - 2 = 2

Input: k = 2, prices = [3, 2, 6, 5, 0, 3]
Output: 7
Explanation:
- Buy on day 2 (price = 2) and sell on day 3 (price = 6), profit = 6 - 2 = 4
- Buy on day 5 (price = 0) and sell on day 6 (price = 3), profit = 3 - 0 = 3
Thus total profit is 7
```

## General Idea:
We will solve this problem via Dynamic Programming. Let `dp[i][k][j]` be the maximum profit we can get at day `i` with at most `k` transactions and `j = 0` means we hold the stock and `j = 1` means we do not hold the stock.

For day `0`, the maximum profit we can hold will be:
- hold the stock: -prices[0]
- not hold the stock: 0

And for any transaction `k > 0`, the maximum profit we can hold will be:
- hold the stock: keep the stock from previous day hold or buy a stock on current day (with the fact that we do not hold the stock from previous day)
- not hold the stock: the maximum profit that we do not hold the stock or sell the stock hold from previous day.

If we need to sell the stock on current day, we must look at the maximum profit on k - 1 of the previous day. Since it stands for complete at most `k` transactions.

## Complexity Analysis
- Runtime Complexity: O(n * k)
- Space Complexity: O(n * k)

## Solution
- [C++](./solution.cpp)
