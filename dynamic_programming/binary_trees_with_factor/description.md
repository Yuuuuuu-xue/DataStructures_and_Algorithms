## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 823

## Problem
Given an array of unique integers `arr`, where each integer `arr[i]` is strictly greater than `1`. We make a binary tree using these integers, and each number may be used for any number of times. Each non-leaf node's value should be equal to the product of the values of its children.

Return the number of binary trees we can make. The answer may be too large so return the answer modulo `10^9 + 7`.

## Example
```
Input: arr = [2, 4]
Output: 3
Explanation: We can make these trees: [2], [4], [4, 2, 2]

Input: arr = [2, 4, 5, 10]
Output: 7
Explanation: We can make these trees: [2], [4], [5], [10], [4, 2, 2], [10, 2, 5], [10, 5, 2]
```

## Key Idea
Since we do not need to generate those binary trees and notice for given a number `x` as the root, the number of ways such that we have a binary tree that satifises the question's constraint is:
- `left subtree` satisfies the question's constraint with a root of `left`
- `right subtree` satisfies the question's constraint with a root of `right`
- `x` = `left` * `right`

Then, it gives us a hint to solve this question via Dynamic Programming. First of all, let `dp[i]` be the number of ways such that we have a binary tree that satisfies the question's constraint with `nums[i]` as the root. If we sort the array in increasing order, then notice for `nums[i]`, its two product must be in `nums[0], nums[1], ..., nums[i - 1]`. Thus, we can simply loop over each element, and loop over it's previous element to find if we have a product, if so, then we can figure out the dp[i].

## Solution
- [C++ Solution](solution.cpp)
