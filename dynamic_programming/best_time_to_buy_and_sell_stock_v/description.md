## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3573

## Problem
You are given an integer array `prices` where `prices[i]` is the price of a stock in dollars on the `ith` day, and an integer `k`.

You are allowed to make at most `k` transactions, where each transaction can be either of the following:
- Normal transaction: Buy on day `i`, then sell on a later day `j` where `i < j`. You profit `prices[j] - prices[i]`.
- Short selling transaction: Sell on day `i`, then buy back on a later day `j` where `i < j`. You profit `prices[i] - prices[j]`.

Note that you must complete each transaction before starting another. Additionally, you can't buy or sell on the same day you are selling or buying back as part of a previous transaction.

Return the maximum total profit you can earn by making at most `k` transactions.

## Example:
```
Input: prices = [1, 7, 9, 8, 2], k = 2
Output: 14
- A normal transaction: buy on day 0 for $1 and then sell on day 2 for $9.
- A short celling transaction: sell the stock on day 3 for $8 then buy back on day 4 for $2.
```

## Key Idea
We can let dp[i][j][k] represent the max profit we can get with 0 to ith stock with `j` transaction left and `k`
- `=0` means no ongoing transaction
- `=1` means normal transaction
- `=2` means short selling transaction

Then for any `i`, `j`, and `k`, we can:
- If `k == 0`, then we can either do nothing, normal transaction or short selling transaction, if later two, then we must take `j - 1`
- If `k == 1`, then we can decide to do nothing or sell it with current price
- If `k == 2`, then we can decide to do nothing or buy it 

If k != 0, we need to return an invalid answer becuase ongoing transaction.

## Complexity Analysis
- Runtime Complexity: O(n * k * 3)
- Space Complexity: O(n * k * 3)

## Solution
- [Python](./solution.py)
