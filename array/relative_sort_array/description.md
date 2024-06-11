# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1122

## Problem
Given two arrays `arr1` and `arr2`, the elements of `arr2` are distinct, and all elements in `arr2` are also in `arr1`.

Sort the elements of `arr1` such that the relative ordering of items in `arr1` are the same as in `arr2`. Elements that do not appear in `arr2` should be placed at the end of `arr1` in ascending order.

## Example
```
Input: arr1 = [2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19], arr2 = [2, 1, 4, 3, 9, 6]
Output: [2, 2, 2, 1, 4, 3, 3, 9, 6, 7, 19]
```

## Key Idea
Simply convert `arr1` into a map that maps elements into its occurrence. Then loop over `arr2` and build sorted `arr1`. If not exist in `arr2`, store the key in different array and then at the end sort that array and append to the sorted `arr1`.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
