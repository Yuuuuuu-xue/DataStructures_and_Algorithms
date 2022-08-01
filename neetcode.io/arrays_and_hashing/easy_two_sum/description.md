## LeetCode Problem
Easy 242

## Description
Given an array of integers `nums` and an integer `target`, return indicies of the two numbers such that they add up to `target`.

You may assume that each input would have **exactly one solution**, and you may not use the same element twice. 

You can return the answer in any order.

## Example
```
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]

Input: nums = [3, 2,4], target = 6
Output: [1, 2]

Input: nums = [3, 3], target = 6
Output: [0, 1]
```

## Basic Idea
Use a map that maps the target - num to it's index. So when we loop over the integer array, we check if target - curr num is in the map or not. If so, we have two indices and if not then simply update the map.

## Solution
- [C++](./solution.cpp)
