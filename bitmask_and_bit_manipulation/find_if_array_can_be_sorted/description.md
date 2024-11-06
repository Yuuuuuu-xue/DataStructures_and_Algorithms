## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3011

## Problem
You are given a 0-indexed array of positive integer `nums`.

In one operation, you can swap any two adjacent elements if they have the same number of set bits. You are allowed to do this operation any number of times (including zero).

Return `true` if you can sort the array, else return `false`.

## Example
```
Input: nums = [8, 4, 2, 30, 15]
Ouptut: true
Explanation:
- The numbers 2, 4, 8 have one set bit each with binary representation of "10", "100", and "1000"
```

## Key Idea
We don't really need to sort the array or subarrays. We can simply group the consecutive subarrays that have the same number of set bits. Then we keep track of min and max for each subarray.

Then suppose we have:
[0, 10] | [30, 50] | [80, 100]

We know the array can be sorted. If they intersect, then we can return `false`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)