## LeetCode Problem
Medium 40

## Description
Given a collection of candidate numbers (`candidates`) and a target number `target`, find all unique combinations in `candidates` where the candidate numbers sum to `target`.

Each number in `candidate` may only be used once in the combination.

Note: the solution set must not contain duplicate combinations.

## Example
```
Input: candidates = [10, 1, 2, 7, 6, 1, 5], target = 8
Output: [[1, 1, 6], [1, 2, 5], [1, 7], [2, 6]]

Input: candidates = [2, 5, 2, 1, 2], target = 5
Output: [[1, 2, 2], [5]]
```

## Basic Idea
Very similar to [this problem](../medium_combination_sum/description.md), we can simply sort the input array and then remove the duplicate values. But this will end with mith TLE, thus we need a better way to handle it. Since we sort the input array i.e. `[1, 2, 2, 2]` and one of the resulint array is `[1, 2, 2]`. We need to make sure we don't have multiple duplicates. When trying every possible combinations, we check if `j = i + 1` (the first value), if so, we can continue recusive otherwise we check if `nums[j] != nums[j - 1]` to avoid `[(1), (2), (2), 2]` and `[(1), 2, (2), (2)]` cases, numbers wrapped with `()` means they are selected to be the output array.

## Solution
- [C++](./solution.cpp)