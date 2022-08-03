## LeetCode Problem
Medium 167

## Description
Given a 1-indexed array of integers `numbers` that is already sorted in non-decreasing order, find two numbers such that they add up to a specific `target` number. Let these two numbers be `numbers[index_1]` and `numbers[index_2]` where `1 <= index_1 < index_2 <= numbers.length`.

Return the indices of the two numbers, `index_1` and `index_2`, added by one as an integer array `[index_1, index_2]` of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

You solution must use only constant extra space.

## Example
```
Input: numbers = [2, 7, 11, 15], target = 9
Output: [1, 2]

Input: numbers = [2, 3, 4], target = 6
Output: [1, 3]
```

## Basic Idea
Notice the array is sorted in non-decreasing order. Suppose we have an array `nums` with two pointers `i` and `j`. 
- If `nums[i] + nums[j] == target`, then we already have the solution.
- If `nums[i] + nums[j] > target`, then we can decrement j since we know that nums[i + 1] >= nums[i] and thus nums[i + 1] + nums[j] > target.
- If `nums[i] + nums[j] < target`, then increment i.

## Solution
- [C++](./solution.cpp)