# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## Problem
Given an iinteger array ```nums```, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order.

Return the *shortest* such subarray and output its length. 

## Example
```
Input: nums = [2, 6, 4, 8, 10, 9, 15]
Output: 5
Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.

Input: nums = [1, 2, 3, 4]
Output: 0
```

## Key Idea
We will use two pointers technique to solve this problem. A left pointer will start with an initial value of 0 and move to the right. It stops when the nums[left] > nums[left + 1]. A right pointer will start with an initial value of length - 1 and move to the left. It stops when the nums[right] < nums[right - 1]. Then find the minimum value and maximum value of nums[left:right + 1]. And move left pointer left until its value < min value and move right pointer to the right until its vaue < max value. At the end, return right - left + 1. 

## Complexity
- The time complexity will be O(n) since a linear scan will be required.
- The space complexity will be O(1) since we just update the pointer.

## Solution
- [Java Solution](shortest_unsorted_continuous_subarray.java)