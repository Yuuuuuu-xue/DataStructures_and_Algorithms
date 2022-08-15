## LeetCode Question
Easy 1

## Description
Given an array of integer `nums` and an integer `target`, return indicies of the two numbers such that they add up to `target`.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

## Example
```
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
Explanation: Because nums[0] + nums[1] = 9

Input: nums = [3, 2, 4], target = 6
Output: [1, 2]
```

## Key Idea
Let `m` be a map that maps the number to the index. Then we can simply traverse the input `nums`. For current number `curr`, we check if `target - curr` is in the map or not, if so found a solution otherwise update the map

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(n)

## Solution
- [C++](solution.cpp)