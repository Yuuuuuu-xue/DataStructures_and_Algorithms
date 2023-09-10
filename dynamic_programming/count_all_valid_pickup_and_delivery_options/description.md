## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## Problem
Given `n` orders, each order consist in pickup and delivery services.

Count all valid pickup/delivery possible sequences such that delivery(i) is always after of pickup(i).

Since the answer may be too large, return it modulo 10^9+7

## Example:
```
Input: n = 1
Output: 1
Explanation: unique order (P1, D1)

Input: n = 2
Output: 6
Explanation: All possible orders are: 
1. (P1, P2, D1, D2)
2. (P1, P2, D2, D1)
3. (P1, D1, P2, D2)
4. (P2, P1, D1, D2)
5. (P2, P1, D2, D1)
6. (P2, D2, P1, D1)
```

## General Idea:
Let `dp[i] =` number of ways of size `i`. If `i = 1`, then `dp[1] = 1`. For `i > 1`, we can choose `i` pickup services to be the first pickup service, then we have `(i - 1) * 2` of pickup and delivery services. The `i` delivery service must come after `i` pickup service (the first service in the order), but it can be in between of all other services. i.e. Suppose `i = 3` and we let `P1` to be the first service, then we have `P2 P3 D2 D3` and `D1` can be in any position between them, thus we have the expression `(i - 1) * 2 + 1`. Since `i` can be any pick up services, thus `* i`. In addition, `P2 P3 D2 D3` the order can be changed, it is the exactly the subproblem thus `* dp[i - 1]`.

Thus, we finally comeup with the expression `dp[i] = i * ((i - 1) * 2 + 1) * dp[i - 1]`

Since `dp[i]` always depend `dp[i - 1]`, we can reduce space complexity to `O(1)`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
