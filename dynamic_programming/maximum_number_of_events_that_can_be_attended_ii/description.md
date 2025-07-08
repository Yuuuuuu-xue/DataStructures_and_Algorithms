## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1751

## Problem
You are given an array of `events` where `events[i] = [startDay_i, endDay_i, value_i]`. The `ith` event starts at `startDay_i` and ends at `endDay_i`, and if you attend this event, you will receive a value of `value_i`. You are also given an integer `k` which represents the maximum number of events you can attend.

You can only attend one event at a time. If you choose to attend an event, you must attend the entire event. Note that the end day is inclusive: that is, you cannot attend two events where one of them starts and the other ends on the same day.

Return the maximum sum of values that you can receive by attending events.

## Example
```
Input: events = [[1, 2, 4], [3, 4, 3], [2, 3, 1]], k = 2
Output: 7
Explanation: Choose the first and second events for a total value of 4 + 3 = 7

Input: events = [[1, 2, 4], [3, 4, 3], [2, 3, 10]], k = 2
Output: 10
Explanation: Choose the third event for a total value of 10
```

## Key Idea
We can solve this problem via dynamic programming.

Let `dp[i][j]` represents the maximum of value that we visit first `i` events and we can attend at most `j` events.

Thus, if `dp[i][j] = 0` since we cannot attend to any events.

For each `ith` event, we can either
1. Attend to `ith` event, and the maximum value could be `value_i` + `dp[k][j - 1]` where `k` is the next index such that we can attend.
    - To find such index `k`, we can sort events by startTime and use binary search to find out smallest index `k` such that `endTime_i` < `startTime_k`
2. Skip the `ith` event and thus the value could be `dp[i + 1][j]`.

## Complexity Analysis
- Runtime Complexity: O(n * k)
- Space Complexity: O(n * k)

## Solution
- [Python](./solution.py)
