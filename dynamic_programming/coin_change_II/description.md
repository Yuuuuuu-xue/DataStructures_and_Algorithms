## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## Problem
You are given an integer array `coins` representing coins of different denominations and an integer `amount` representing a total amount of money.

Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return `0`.

You may assume that you have an infinite number of each kind of coin.

The answer is guaranteed to fit into a signed 32-bit integer.

## Example
```
Input: amount = 5, coins = [1, 2, 5]
Output: 4
Explanation: there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1
```

## Key Idea
Simply use a dynamic programming to solve this problem. Let `dp[i]` be the number of combinations that we can make up with amount `i`. Then we know `dp[0] = 1` and `dp[amount] =` final solution. For any `dp[i]`, we will iterate over each coin and `dp[i] += dp[i - amount]` if `i >= amount`. However, note we are trying to find combinations, this means we don't want a solution to contain `[1, 2]` and `[2, 1]` combinations since they are the same answer. In this case, we can try to loop over coins first, then compute `dp[i] for i = 1, ..., amount`. So if we are compute `i = 3` and if we have `coin = 1, 2`.
- For coin = 1, we compute
  - `dp[1] = 1` since `[[1]]`
  - `dp[2] = 1` since `[[1, 1]]`
  - `dp[3] = 1` since `[[1, 1, 1]]`
- For coin = 2, we compute
  - `dp[1] = 1` since `[[1]]`
  - `dp[2] += dp[2 - 2]` = `[[1, 1]] + [[2]]`
  - `dp[3] += dp[3 - 2]` = `[[1, 1, 1]] + [[2, 1]]`, it will not include `[[1, 2]]`

## Time Complexity and Space Complexity
- The time complexity is O(n * amount) where n is the length of integer array
- The space complexity is O(amount)

## Solution
- [C++](solution.cpp)
