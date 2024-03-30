# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 992

## Problem
GIven an integer array `nums` and an integer `k`, return the number of good subarrays of `nums`.

A good array is an array where the number of different integers in that array is exactly `k`. For example, `[1, 2, 3, 1, 2]` has `3` different integers: `1`, `2`, and `3`. 

A subarray is a contiguous part of an array.

## Example:
```
Input: nums =[1, 2, 1, 2, 3], k = 2
Output: 7
Explanation: Subarrays formed with exactly 2 different integers:
- [1, 2]
- [2, 1]
- [1, 2]
- [2, 3]
- [1, 2, 1]
- [2, 1, 2]
- [1, 2, 1, 2]
```

## Key Idea
Since we are asking for a contiguous array, thus, we will use two pointers (sliding window) to solve this problem.

We will keep the window to have number of different integers that is exactly `k`. We will use a map that mpas the numbers to its occurrence and the number of different elements will equal to the size of the map.

The key idea of this problem is that exactly `k` is same as at most `k` - at most `k - 1`. Thus, we will define a helper function to find at most given `k`.

To find at most given `k`, we iterate over each element and update `m`. While `m` has a size `> k`, we move the left pointer and update `m`. Then every subarrays in the window are valid and we can increment `num_subarray` as `right - left + 1`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)