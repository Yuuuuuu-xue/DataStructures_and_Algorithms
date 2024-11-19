# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2461

## Problem
You are given an integer array `nums` and an integer `k`. Find the maximum subarray sum of all the subarray of `nums` that meet the following conditions:
- The length of the subarray is `k`, and 
- All the elements of the subarray are distinct

Return the maximum subarray sum of all the subarray that meet the condition. If no subarray meets the conditions, return `0`.

A subarray is a contiguous non-empty sequence of elements within an array.

## Example:
```
Input: nums = [1, 5, 4, 2, 9, 9, 9], k = 3
Output: 15
Explanation:
- [1, 5, 4] which meets the requirements and has a sum of 10
- [5, 4, 2] which meets the requirements and has a sum of 11
- [4, 2, 9] which meets the requirements and has a sum of 15
The maximum sum we have is 15.
```

## Key Idea
We can simply traverse the element at index `i`

- If current window size >= k, we remove the leftmost element from the window, in this case, `i - k`, then do the following

- If the element is unique in the current window and current window size < k, we add it to the window
- If element is not unique, we remove the elements from `i - k` to `j` where `j` is the index of the last duplicate character in the window. Then we add it to the current character to the window.

To keep track of window, we can simply use a hash map that maps the element to its index. We can keep track of window sum.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)