## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
Medium 659

## Problem
You are given an integer array `nums` that is sorted in non-decreasing order.

Determine if it is possible to split `nums` into one or more subsequences such that both of the following conditions are true:
- Each subsequence is a consecutive increasing sequence (i.e. each integer is exactly one more than the previous integer)
- All subsequnces have a length of `3` or more

Return `true` if you can split `nums` according to the above conditions, or `false` otherwise.

A subsequence of an array is a new array that is formed from the original array by deelteing some (can be none) of the elements without disturbing the relative positions of the remaining elements (i.e. `[1, 3, 5]` is a subsequence of `[1, 2, 3, 4, 5]` while `[1, 3, 2]` is not).

## Example
```
Input: nums = [1, 2, 3, 3, 4, 5]
Output: true
Explanation: nums can be split into [1, 2, 3] and [3, 4, 5]

Input: nums = [1, 2, 3, 3, 4, 4, 5, 5]
Output: true
Explanation: nums can be split into [1, 2, 3, 4, 5], [3, 4, 5]

Input: nums = [1, 2, 3, 4, 4, 5]
Output: false
```

## Key Idea
We will solve this question via Greedy algorithm. Our greedy strategy is that if we see any number `curr`, we will try to add this number as the end of existing subsequence that ends with `curr - 1`. So we can use a map that maps the end of existing subsequence to the number of subsequences that has this number at the end. Otherwise, we will construct this number as new sequences with `curr + 1` and `curr + 2`. So we need to map the number to its occurrence. And update the map when needed. When the map entry is negative, this means we cannot construct a subsequence and thus we need to return false.

## Solution:
- [C++](solution.cpp)