# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1512

## Problem
Given an array of integer `nums`, return the number of good pairs.

A pair `(i, j)` is called good if `nunms[i] == nums[j]` and `i < j`.

## Examples:
```
Input: nums = [1, 2, 3, 1, 1, 3]
Output: 4
Explanation: There are 4 good pairs (0, 3), (0, 4), (3, 4) and (2, 5)

Input: nums = [1, 1, 1, 1]
Output: 6
Explanation: Each pair in the array are good

Input: nums = [1, 2, 3]
Output: 0
```

## Basic Idea
We can iterate over the numbers from the back. When we see a number `i`, we check the number of times `x` we have seen it and increment the output by `x`. We can do it because all the numbers we have see so far all have index that is greater than the current index, thus `x` of good pairs.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
- [Rust](./solution.rs)