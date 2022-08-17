## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## Problem
You are givne an array `prices` where `prices[i]` is the price of a given stock on the `ith` day. Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e. buy one ad sell one share of the stock multiple times) with the following restrictions:
- After you sell your stock, you cannot buy the stock on the next day (i.e. cooldown one day)

Note: you may not engage in multiple transactions simultaneously (i.e. you must sell the stock before you buy again)/

## Example:
```
Input: prices = [1, 2, 3, 0, 2]
Output: 3
Explanation: transactions = [buy, sell, colldown, buy, sell]
```

## General Idea:
Let dp[i] be the maximum profit we can have on `i, i + 1, ..., n - 1` days. Thus, it is the maximum profit with the `prices[i:]`. Then we know, on the last day, since we cannot sell anything and thus `dp[n - 1] = 0`. And `dp[0]` will be our final solution. On `ith` day, we have two choices:
- Buy the stock `i` and sell it on `j = i + 1, i + 2, ..., n - 1` days. Then notice we will have a cool down period, so need to wait at least two days. Thus dp[i] = max(prices[j] - prices[i] + dp[j + 2]).
- Do nothing with the stock `i`, then simply `dp[i] = dp[i + 1]`.

Notice for the first condition, we loop over `j` from `i + 1` to `n - 1` and we will have `dp[j + 2]`, thus, we need a dp of size `n + 2` so do not need to check if `j + 2` exceeds the size of not. 

## Complexity Analysis
- Runtime Complexity: O(n ^ 2)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
