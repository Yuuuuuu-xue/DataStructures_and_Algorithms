## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1420

## Problem
You are given three integers `n`, `m`, and `k`. Consider the following algorithm to find the maximum element of an array of positive integers:
```
maximum_value = -1
maximum_index = -1
search_cost = 0
n = arr.length
for (int i = 0; i < n; i++) {
  if (maximum_value < arr[i]) {
    maximum_value = arr[i]
    maximum_index = i
    search_cost += 1
  } 
}
```
You should build the array arr which has the following properties:
- `arr` has exactly `n` integers
- `1 <= arr[i] <= m` where (`0 <= i < n`)
- After applying the mentioned algorithm to `arr`, the value `search_cost` is equal to `k`

Return the number of ways to build the array `arr` under the mentioned conditions. As the answer may grow large, the answer must be computed modulo `10**9 + 7`.

## Example
```
Input: n = 2, m = 3, k = 1
Output: 6
Explanation: The possitve arrays are [1, 1], [2, 1], [2, 2], [3, 1], [3, 2], [3, 3]

Input: n = 5, m = 2, k = 3
Output: 0

Input: n = 9, m = 1, k = 1
Output: 1
Explanation: The only possible array is [1, 1, 1, 1, 1, 1, 1, 1, 1]
```

## Key Idea
We will solve this problem via Dynamic Programming. Let `dp[i][j][k]` be the number of ways to build the array `arr` such that `i` means `n`, `j` means `m` and `k` means `k`.

Then, we know that if `i == 1` and `j <= m` and `k == 1`, then `dp[1][j][1] = 1`. This is because we can always have an array `[j]` that has search cost of `1`.

Then
Then for `i >= 1`, `j >= 1` and `k >= 1`, we can divide it into two cases:
1. search cost is same from previous length `i - 1`
2. search cost is previous search cost + 1

For 1, the last element can be anything from 1 to j, thus `dp[i][j][k] += j * dp[i - 1][j][k]`.

For 2, the last element must be a new maximum which means, we can loop over `1 <= x < j` and put `x` as the element. Then all previous element should have at most `x - 1` with search cost `k - 1`. Note `x < j` because if `x = j`, then search cost is the same as current.

Thus `dp[i][j][k] += dp[i - 1][x][k - 1]`

At the end sum up `dp[i][x][k]` to get the final solution.

## Complexity Analysis
- Runtime Complexity: O(n * m * k)
- Space Complexity: O(n * m * k)

## Solution
- [C++ Solution](solution.cpp)
