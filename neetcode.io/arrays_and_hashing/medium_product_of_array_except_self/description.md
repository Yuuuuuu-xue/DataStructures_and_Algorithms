## LeetCode Problem
Medium 238.

## Description
Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

The product of any prefix or suffix of `nums` is guarnateed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

## Example
```
Input: nums = [1, 2, 3, 4]
Output: [24, 12, 8, 6]

Input: nums = [-1, 1, 0, -3, 3]
Output: [0, 0, 9, 0, 0]
```

## Basic Idea
Since there is a requirement for no division, we cannot use currProduct and divide the current value and multiply by previous value to get the target. However, the hint is given by the question is that to use the prefix and suffix. We can simply build a two arrays, `prefixProduct` and `suffixProduct` so that `prefix[i] = nums[0] * nums[1] * ... * nums[i - 1]` and `suffix[i] = nums[i + 1] * nums[i + 2] * ... * nums[n]`. Therefore, the product of the array at index i will be `prefix[i] * suffix[i]`.

## Solution
- [C++](./solution.cpp)