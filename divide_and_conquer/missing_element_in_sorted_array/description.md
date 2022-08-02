## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1060 (Premium)

## Description
Given an integer array `nums` which is sorted in ascending order and all of its elements are unique and given also an integer `k`, return the kth missing number starting from the leftmost number of the array.

## Example
```
Input: nums = [4, 7, 9, 10], k = 1
Output: 5
Explanation: The first missing number if 5

Input: nums = [4, 7, 9, 10], k = 3
Output: 8
Explanation: The missing numbers are [5, 6, 8, ...], hence the third missing number is 8.
```

## Basic Idea
We will use binary search to solve this problem. For array[i:j + 1], we will compare array[(i + j) / 2] element with array[i]. The difference = array[(i + j) / 2] - array[i] - ((i + j) / 2 - i) = number of missing values.
1. If the difference is < k, then we move to the right side, update i = (i + j) / 2. Update k = k - difference.
2. If the difference is >= k, then we move to the left side, update j = (i + j) / 2.

At the end, when i = j or i + 1 = j, we split it into two cases:
- If the missing numbers between array[j] and array[i] >= k, then simply add array[i] + k.
- If the missing numbers between array[j] and array[i] < k, then we update k to k - missing number between array[j] and array[i] and add the number from array[j].

## Solution
- [C++](./solution.cpp)