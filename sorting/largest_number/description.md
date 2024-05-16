## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 179

## Problem
Given a list of non-negative integer `nums`, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.

## Example
```
Input: nums = [10, 2]
Output: "210"

Input: nums = [3, 30, 34, 5, 9]
Output: "9534330"
```

## Key Idea
We will first conver the list of numbers into a list of strings. Then sort the list and if an item `str1` comes before another item `str2` if `str1 + str2 >= str2 + str1`. Then at the end, simply join the array.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
