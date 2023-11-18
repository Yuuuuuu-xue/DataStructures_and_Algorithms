# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1838

## Problem
The frequency of an element the number of times it occurs in an array.

You are given an integer array `nums` and an integer `k`. In one operation, you can choose an index of `nums` and increment the element at that index by `1`.

Return the maximum possible frequency of an element after performing at most `k` operations

## Example
```
Input: nums = [1, 2, 4], k = 5
Output: 3
Explanation: Increment the first element three times and the second element two times to make nums = [4, 4, 4]
```

## Key Idea
Since we can only increment numbers not decrement, thus we need to start with smaller number. Thus, we can sort the input array.

Then let's solve this problem with a sliding window. Let `i` and `j` be the window size of number of elements increase to the element `nums[j]`. Thus, we can just update the window and keep track the maximum window size.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution:
- [C++](./solution.cpp)
