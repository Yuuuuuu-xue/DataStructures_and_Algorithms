## LeetCode Problem
Medium 494

## Description
You are given an integer array `nums` and an integer `target`.

You want to build an expression out of nums by adding one of the symbols `+` and `-` before each integer in nums and then concatenate all the integers.

- For example, if `nums = [2, 1]`, you can add a `+` before `2` and `-` before `1` and concatenate them to build the expression `+ 2 - 1`.

Return the number of different expressions that you can build, which evaluates to `target`.

## Example
```
Input: nums = [1, 1, 1, 1, 1], target = 3
Output: 5
Explanation:
  1. - 1 + 1 + 1 + 1 + 1 = 3
  2. + 1 - 1 + 1 + 1 + 1 = 3
  3. + 1 + 1 - 1 + 1 + 1 = 3
  4. + 1 + 1 + 1 - 1 + 1 = 3
  5. + 1 + 1 + 1 + 1 - 1 = 3
```

## Basic Idea
We want to solve this problem with recursion. Suppose we reach to the end index and `target = 0`, then there is one expression we can build, if `target > 0` or `target < 0`, then such expression is not the expression that we are looking for.

For any `0 <= i < n`, we can build expression by `target + nums[i]` and `target - nums[i]`, then recursively search for the solution.

Note, we may reach to a stage where `target` and `i` is the same, then we use memorization (dynamic programming) to avoid the duplicate call. We need to include `i` since different `i` may lead to different number of expressions.

## Complexity Analysis
- Runtime Complexty: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)