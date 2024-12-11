# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2779

## Problem
You are given a 0-indexed array `nums` and a non-negative integer `k`.

In one operation, you can do the following:
- Choose an index `i` that hasn't been chosen before from the range `[0, nums.length - 1]`.
- Replace `nums[i]` with any integer from the range `[nums[i] - k, nums[i] + k]`.

The beauty of the array is the length of the longest subsequence consisting of equal elements.

Return the maximum possible beauty of the array `nums` after applying the operation any number of times.

Note that you can apply the operation to each index only once.

A subsequence of an array is a new array generated from the original array by deleting some elements (possibly none) without changing the order of the remaining elements.

## Example:
```
Input: nums = [4, 6, 1, 2], k = 2
Output: 3
Explanation:
- Choose index 1, replace it with 4
- Choose index 3, replace it with 4
```

## Key Idea
We can simply sort the nums and start from smallest element.

We will use a sliding window to solve this problem where all elements in the window will be part of beauty array (can be modified to the same elements).

We can loop over each element and add new element to the window and pop element (from left) that cannot change to the beauty element.

Note the smallest element in the window is `nums[left]`. The max number it can change to is `nums[left] + k`. 

The largest element in the window is `nums[right] = curr`. The number it can change to is `nums[right] - k`.

Thus, if `nums[left] + k >= nums[right - k]`, they can change to the same element and all elements in between can change to the same element.

We keep track of maximum possible length of the window.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)