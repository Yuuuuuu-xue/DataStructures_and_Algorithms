## LeetCode Problem
Medium 128

## Description
Given an unsorted array of integer `nums`, return the length of the longest consecutive elements seuqence. You must write an algorithm that runs in O(n) time.

## Example
```
Input: nums = [100, 4, 200, 1, 3, 2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

Input: nums = [0, 3, 7, 2, 5, 8, 4, 6, 0, 1]
Output: 9
```

## Basic Idea
We can use a hashmap to solve this problem. First of all, maps each unique element to a value of 1. Then simply loop over the original list, if the element is in the map, then do a while loop, while curr + 1 is in the map, accumulate the value of map[curr + 1] and update the curr = curr + 1 and remove the entry of curr + 1. When we exit the while loop, keep track of the current maximum value. We want to remove the entry so no repeat work is needed.

## Solution
- [C++](./solution.cpp)