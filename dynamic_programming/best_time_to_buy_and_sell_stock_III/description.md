## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 123

## Problem
You are given an array `prices` where `prices[i]` is the price of a given stock on the `ith` day.

Find the maximum profit you can achieve. You may complete at most two transactions.

Note: you may not engage in multiple transactions simulaneously (i.e. you must sell the stock before you buy again).

## Example:
```
Input: prices = [3, 3, 5, 0, 0, 3, 1, 4]
Output: 6
Explanations: Buy on day 4 (prices = 0) and sell on day 6 (price = 3), profit = 3 - 0 = 3.

Input: prices = [1, 2, 3, 4, 5]
Output: 4
Explanation: Buy on day 1 (price = 1) and sell on day 5 (price = 5), profit = 5 - 1 = 4
```

## General Idea:
Let
- `holdFirst` represents the maximum profit with holding the stock with first transaction
- `notHoldFirst` represents the maximum profit not holding the stock with first transaction
- `holdSecond` represents the maximum profit with holding the stock with second transaction
- `notHoldSecond` represents the maximum profit not holding the stock with second transaction

Then initially, let `holdFirst = -prices[0]` and `holdSecond = INT_MIN` since we need to buy a stock and rest of variables to a value 0.
Then for any day `i > 0`, we can:
- keep a stock on hand
  - keep the stock from the `holdFirst`, then `holdFirst = max(holdFirst, -prices[i])`
  - buy another stock + profit from not holding the first transaction, then `holdSecond = max(holdSecond, notHoldFirst - prices[i])`
- do not keep any stock (sell it)
  - sell the stock on hand from first transaction or not sell it `notHoldFirst = max(notHoldFirst, holdFirst + prices[i])`
  - sell the stock on hand from second transaction or not sell it `notHoldSecond = max(notHoldSecond, holdSecond + prices[i])`
At the end, the maximum value among the 4 values will be the final solution.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
