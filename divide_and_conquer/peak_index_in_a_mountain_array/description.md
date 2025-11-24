## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## Problem
You are given an integer mountain array `arr` of length `n` where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in `O(n lg n)` time complexity.

## Examples:
```
Input: arr = [0, 2, 1, 0]
Output: 1
```

## Key Idea
A simple solution to use binary search.

At mid element, we try to compare its left and right (if exists and mid is not boundary), then if left < mid > right, return mid.

If arr[mid-1] < arr[mid] < arr[mid+1], then search right
If arr[mid-1] > arr[mid] > arr[mid+1], then search left

## Complexity Analysis
- Runtime Complexity: O(lg n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)