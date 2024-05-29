# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2398

## Problem
You have `n` robots. You are given two 0-indexed integer arrays, `chargeTimes` and `runningCosts`, both of length `n`. The `ith` robot costs `chargeTimes[i]` units to charge and costs `runningCosts[i]` units to run. You are also given an integer `budget`.

The total cost of running `k` chosen robots is equal to `max(chargeTimes) + k * sum(runningCosts)`, where `max(chargeTimes)` is the largest charge cost among the `k` robots and `sum(runningCosts)` is the sum of running costs among the `k` robots.

Return the maximum number of consecutive robots you can run such that the total cost does not exceed `budget`.

## Example:
```
Input: chargeTimes = [3, 6, 1, 3, 4], runningCosts = [2, 1, 3, 4, 5], budget = 25
Output: 3
Explanation: The optimal is to use first 3 robots. The total costs equals to max(3, 6, 1) + 3 * sum (2, 1, 3) = 6 + 3 * 6 = 24 <= 25.
```

## Key Idea
Since we want to find the consecutive robots, it provides a hint to use a sliding window or two pointers to solve this problem. We can use `curr_sum` to keep track the sum in the window. With two pointers `i` and `j`, we can calculate number of robots. To keep track of max `chargeTimes`, we can use a max heap to keep track and a hash map.

When we remove `i` robot from the window:
- If `chargeTimes[i]` is the top of max heap, pop it
- Otherwise, increment `m[chargeTimes[i]]` by 1

Then, for each iteration, if `max_heap.top()` exists in `m` and counter `> 0`, then we pop it and continue until `m[max_heap.top()] == 0`.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)