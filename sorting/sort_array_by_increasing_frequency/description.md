## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1636

## Problem
Given an array of integers `nums`, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.

Return the sorted array.

## Example
```
Input: nums = [1, 1, 2, 2, 2, 3]
Output: [3, 1, 1, 2, 2, 2]
```

## Key Idea
Simply build the map that maps item to its frequency. Then reverse the map that maps the frequency to a number. Then, simply loop over entry from the map from smallest to largest and sort the number where they have the same frequency.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
