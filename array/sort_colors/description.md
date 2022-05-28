# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 75

## Problem
Given an array ```nums``` with ```n``` objects colored red, white, or blue, sort them **in-place** so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers ```0```, ```1```, and ```2``` to represent the color red, white, and blue, respectively. You must solve this problem without using the library's sort function.

## Example
```
Input: nums = [2, 0, 2, 1, 1, 0]
Output: [0, 0, 1, 1, 2, 2]

Input: nums = [2, 0, 1]
Output: [0, 1, 2]
```

## Key Idea
We will use two pointers technique. Let i = 0 and j = len - 1. We will loop over the array, if curr[i] == 0, then increment i until curr[i] != 0. Similar, if curr[k] == 2, then decrement j until curr[j] != 2. Once them stop, let k = i and increment k iff curr[k] is 1. If we stop, then curr[k] is either curr[k] = 0 or 2. If curr[k] == 0, then we swap curr[i] and curr[k]. Increment i by 1 and k by 1. Similar for 2, we swap curr[k] and curr[j]. Until k == j, we stop since the array is then sorted.

## Solution
- [Java Solution](sort_colors.java)