## LeetCode Problem
Medium 39

## Description
Given an array of distinct integers `candidates` and a target integer `target`, return a list of all unique combinations of `candidates` where the chosen numbers sum to `target`. You may return the combinations in any order.

The same number may be chosen from `candidates` an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to `target` is less than `150` combinations for the given input.

## Example
```
Input: candidates = [2, 3, 6, 7], target = 7
Output: [[2, 2, 3], [7]]

Input: candidates = [2, 3, 5], target = 8
Output: [[2, 2, 2, 2], [2, 3, 3], [3, 5]]
```

## Basic Idea
We can simply use a backtracking to solve this problem. For each recursion, we will taking in an array `currCandidates`, index `i`, and `curr` that represents the current sum. We will try to find if we can find candidates from index `i` to the end of the array that we must include `candidates[i]` in the output array so that we can get `target` with `curr`. For the base case, if index `i >= candidates.size()`, then we stop since it is not possible to find any candidates. For each recursive step, if `curr + candidates[i] == target`, then find a possible combination, if `candidates[i] < target`, loop over `j = i, ..., n - 1` and perform a recursive call.

## Solution
- [C++](./solution.cpp)