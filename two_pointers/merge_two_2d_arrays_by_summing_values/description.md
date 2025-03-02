# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2570

## Problem
You are given two 2D integer arrays `nums1` and `nums2`.
- `nums1[i] = [id_i, val_i]` indicate that the number with the id `id_i` has a value equal to `val_i`
- `nums2[i] = [id_i, val_i]` indicate that the number with the id `id_i` has a value equal to `val_i`

Each array contains unique ids and is sorted in ascending order by id.

Merge the two arrays into one array that is sorted in ascending order by id, respecting the following conditions:
- Only ids that appear in at least one of the two arrays should be indcluded in the resulting array
- Each id should be included only once and its value should be the sum of the values of this id in the two arrays. If the id does not exist in one of the two arrays, then assume its value in that array to be `0`.

Return the resulting array. The returned array must be sorted in ascending order by id.

## Example
```
Input: nums1 = [[1, 2], [2, 3], [4, 5]], nums2 = [[1, 4], [3, 2], [4, 1]]
Output: [[1, 6], [2, 3], [3, 2], [4, 6]]
```

## Key Idea
Simply use two pointers to solve this problem.

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(n + m)

## Solution
- [Python](./solution.py)