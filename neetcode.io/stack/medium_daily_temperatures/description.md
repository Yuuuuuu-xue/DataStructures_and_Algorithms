## LeetCode Problem
Medium 739

## Description
Given an array of integers `temperatures` represents the daily temperatures, return an array `answer` such that `answer[i]` is the number of days you have to wait after `ith` day to get a warmer temperature. If there is no future day for which this is possible, keep `answer[i] == 0` instead.

## Example
```
Input: temperatures = [73, 74, 75, 71, 69, 72, 76, 73]
Output: [1, 1, 4, 2, 1, 1, 0, 0]

Input: temperatures = [30, 40, 50, 60]
Output: [1, 1, 1, 0]

Input: temperatures = [30, 60, 90]
Output: [1, 1, 0]
```

## Basic Idea
Since for `ith` day, it depends on the days after `ith` day so we will build the answer from back to front. Let `s` be a stack of temperatures in the future days and we will loop over the temperatures from back to front. For each iteration:
- If stack is empty, then no warmer day and we can push the current temperature (index) into the stack
- If stack is not empty, and top of the stack has a warmer temperature, then push the current temperature (index) into the stack and we have found the number of days for next warmer temperature we want
- If stack is not empty, and top of the stack does not have a warmer temperature, then we can pop it from the stack, and repeat the same process of above two steps. Notice we can pop it from the stack since later day's temperature <= curr day's temperature, then for any days before curr day, we can use the curr day's temperature to compare.

## Solution
- [C++](./solution.cpp)