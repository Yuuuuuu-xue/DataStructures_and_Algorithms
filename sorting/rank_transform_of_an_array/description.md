## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1331

## Problem
Given an array of integers `arr`, replace each element with its rank.

The rank represents how large the element is. The rank has the following rules:
- Rank is an integer starting from 1.
- The larger the element, the larger the rank. If two elements are equal, their rank must be the same.
- Rank should be as small as possible

## Example
```
Input: arr = [40, 10, 20, 30]
Output: [4, 1, 2, 3]

Input: arr = [100, 100, 100]
Output: [1, 1, 1]
```

## Key Idea
We need to sort the array to find the largest element to smallest element. But for given an element, how do we know its rank? After sorting, we can simply build a hash map that maps the actual element to its rank and then build the output array.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
