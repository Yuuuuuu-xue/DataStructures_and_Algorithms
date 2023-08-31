## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1326

## Problem
There is a one-dimensional garden on the x-axis. The garden starts at the point `0` and ends at the point `n`. (i.e. the length of the garden is `n`).

There are `n + 1` taps located at the point `[0, 1, ..., n]` in the garden.

Given an integer `n` and an integer array `ranges` of length `n + 1` where `ranges[i]` (0-indexed) means the `i-th` tap can water the area `[i - ranges[i], i + ranges[i]]` if it was open.

Return the minimum number of taps that should be open to water the whole garden, if the garden cannot be watered return -1.

## Example
```
Input: n = 5, ranges = [3, 4, 1, 1, 0, 0]
Output: 1
Explanation:
- The tap at point 0 can cover the interval [-3, 3]
- The tap at point 1 can cover the interval [-3, 5]
- The tap at point 2 can cover the interval [1, 3]
- The tap at point 3 can cover the interval [2, 4]
- The tap at point 4 can cover the interval [4, 4]
- The tap at point 5 can cover the interval [5, 5]
Opening only the second tap will water the whole garden [0, 5]
```

## Key Idea
We will solve this problem via Dynamic Programming. Let `dp[i]` be the minimum taps needed to water up to point `i`. Then `dp[0] = 0` since there is no interval needed to be watered and for each tap `x`, we know the range is `[x - ranges[x], x + ranges[x]]`. We can iterate over the range `k` where `x - ranges[x] <= k <= x + ranges[x]`, if we choose to open this tap, then as long as all other taps outside this range `<= x` are covered, then we are good. Thus `dp[k] = min(dp[k], 1 + dp[x - ranges[x]])`

- `1` to open the tap at index x
- `dp[x - ranges[x]]` to open all other taps `<= k`

## Complexity Analysis
- Runtime Complexity: O(n * m) where m is the max diff between the range
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)