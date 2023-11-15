## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1846

## Problem
You are given an array of positive integer `arr`. Perform some operations (possibly none) on `arr` so that it satisfies these conditions:
- The value of the first element in `arr` must be `1`
- The absolute difference between any 2 adjacent element must be less than or equal to `1`. In other words, `abs(arr[i] - arr[i - 1]) <= 1` for each `i` where `1 <= i < arr.length` (0-indexed).

There are 2 types of operations that you can perform any number of items:
- Decrease the value of any element or `arr` to a smaller positive integer
- Rearrange the element of `arr` to be in any order

Return the maximum possible value of an element in `arr` after performing the operations to satisfy the conditions.

## Example:
```
Input: arr = [2, 2, 1, 2, 1]
Output: 2

Input: arr = [100, 1, 1000]
Output: 3
Explanation: [1, 2, 3]

Input: arr = [1, 2, 3, 4, 5]
Output: 5
```

## Key Idea
We can sort the array from smallest to largest.

Then let `i = 1`, if `arr[i] < i`, then we simply move to the next element. If `arr[i] >= i`, then we can include `i` in the output `arr` and increment `i` by 1. 

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
