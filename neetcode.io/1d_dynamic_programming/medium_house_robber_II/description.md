## LeetCode Problem
Medium 213

## Description
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses where broken into on the same night.

Given an integer array `nums` representing the amount of money of each house, return the maximum amount of money that you can rob tongiht without alerting the police.

## Example
```
Input: nums = [2, 3, 2]
Output: 3
Explanation: You cannot rob house 0 and house 2

Input: nums = [1, 2, 3, 1]
Output: 4
Explanation: Rob house 0 and house 2
```

## Basic Idea
Very similar to [this problem](../medium_house_robber/description.md) but with the constraint that houses are in a circle. Note, we cannot rob the first and last houses at the same time.

We can try to rob the house with two ways:
- Houses from 0 to n - 1
- Houses from 1 to n

This way, it will satisfy the constraint and the maximum amount of money between this two ways are the value that we are looking for.

## Complexity Analysis
- Runtime Complexty: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)