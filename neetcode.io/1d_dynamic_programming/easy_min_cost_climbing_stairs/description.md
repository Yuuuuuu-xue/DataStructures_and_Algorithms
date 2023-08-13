## LeetCode Problem
Easy 746

## Description
You are given an integer array `cost` where `cost[i]` is the cost of `ith` step on a staircase. Once you pay the cost, you can either climb one or two steps. You can either start from the step with index `0` or the step with index `1`.

Return the minimum cost to reach the top of the floor.

## Example
```
Input: cost = [10, 15, 20]
Output: 15

Explanation: You will start at index 1
- Pay 15 and climb two steps to reach the top.
The total cost is 15.

Input: cost = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
Output: 6
```

## Basic Idea
We want to find the minimum cost to reach to `ith` step. Note we can reach to `ith` step either from `i - 1` or `i - 2` steps, thus, we can break the problem into smaller size and apply dynamic programming to solve this problem.

Let `dp[i]` be the minimum cost to reach to the `ith` step, then
- `dp[0] = cost[0]` pay the `cost[0]` and climb one step to the top
- `dp[1] = min(cost[0], cost[1])`, pay the `cost[0]` and climb two steps to the top or `cost[1]` and climb one step to the top.
- `dp[i] = `
  - Start at `i - 1`, then the price = `dp[i - 1]` since we can pay the cost and climb two steps. But what if we already climb two steps to `dp[i - 1]`?

Thus we need `dp[i][0]` to represent the min cost to climb to `ith` step with zero extra steps left and `dp[i][1]` to represent the min cost to climb to `ith` step with one extra steps.

Then:
  - for `i = 1`
    - `dp[1][0] = 0`
    - `dp[1][1] = cost[1]`
  - for `i >= 2`
    - `dp[i][0] = zero steps left to reach to ith step`, we can either
      - When we reach to i - 1 with one extra step, thus we can climb to i without any additional cost
      - At i - 2, pay the cost and climb two steps
      - `= min(dp[i - 1][1], dp[i - 2] + cost[i - 2])`
    - `dp[i][1] = one step left to reach to ith step`
      - We must at `i - 1`, pay the cost, climb one step and left with one extra
      - `dp[i - 1][0] + cost[i - 1]`
      - `dp[i - 1][1] + cost[i - 1]`

Note we always need `dp[i - 1]` and `dp[i - 2]`, thus we can use two variables to reduce the space complexity from `O(n)` to `O(1)`

Note, we need to loop over up to `i = n`, since in the example `[10, 15, 20]` we cannot pay `10` and move two steps, still need one more step to the end. 

## Complexity Analysis
- Runtime Complexty: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)