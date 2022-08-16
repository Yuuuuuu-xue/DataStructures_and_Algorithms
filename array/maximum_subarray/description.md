# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 53

## Problem
Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum. A subarray is a contiguous part of an array.

## Example
```
Input: nums = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
Output: 6
Explanation: [4, -1, 2, 1] has the largest sum = 6

Input: nums = [1]
Output: 1

Input: nums = [5, 4, -1, 7, 8]
Output: 23
```

## Key Idea
Since we want to get the maximum sum of contiguous array, if we loop over each item, we need to determine if we include the current item in the previous contiugous array or starting over again and current item will be the first item of the contiguous array.

Let `curr` be the sum of the current contigous array. If `curr` + curr item >= `curr item`, then there is no need to start it over again and we can update the `curr = curr + curr item`. Otherwise let `curr = curr item`. 

Note, everytime we update `curr`, we need to update the final solution to guarantee the maximum solution. For instance, suppose `curr = 5` and `curr item = -1`, then `curr + curr item = 4 > -1` but the maximum value should be at least 5.

## Solution
- [C++](./solution.cpp)