## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1269

## Problem
You have a pointer at index `0` in an array of size `arrLen`. At each step, you can move 1 position to the left, 1 position to the right in the array, or stay in the same place (The pointer should not be placed outside the array at any time).

Given two integers `steps` and `arrLen`, return the number of ways such that your pointer is still at index `0` after exactly `steps` steps. Since the answer may be too large, return it modulo `10**9 + 7`.

Constraints:
- `1 <= steps <= 500`
- `1 <= arrLen <= 10 ** 6`

## Example
```
Input: steps = 3, arrLen = 2
Output: 4
Explanation: there are 4 different ways to stay at index 0 after 3 steps
- right, left, stay
- stay, right, left
- right, stay, left
- stay, stay, stay

Input: steps = 2, arrLen = 4
Output: 2

```

## Key Idea
We will solve this problem via Dynamic Programming. Since at current position `i` with `steps`, we can choose to move right, left or stay, and thus `steps = steps - 1`. Then we break this problem into a smaller problem.

We will solve this problem via top down dp. Let `solve` be a recursive function that takes in `i` and `currSteps`, then we know that the `dp[i]` is
- Move right: `solve(i + 1, steps - 1)` if `i < n - 1`
- Move left: `solve(i - 1, steps - 1)` if `i > 0`
- Stay: `solve(i, steps - 1)`

Then as the base case, if `steps = 0`, then `solve(i, 0)` returns 1 if `i == 0` else 0.

If `dp[i][currSteps]` has the value, return that.

Note the time complexity all depends on `arrLen` and we can reduce the maximum possible length by `arrLen` / 2 because if we walk to right more than half, then it is not possible to walk back to the left.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [C++](solution.cpp)