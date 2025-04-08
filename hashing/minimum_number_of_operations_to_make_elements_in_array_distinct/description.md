## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 3396

## Problem
You are given an integer array `nums`. You need to ensure that the elements in the array are distinct. To achieve this, you can perform the following operation any number of times:
- Remove 3 elements from the beginning of the array. If the array has fewer than 3 elements, remove all remaining elements.

Note that an empty array is considered to have distinct elements. Return the minimum number of operations needed to make the elements in the array distinct.

## Example
```
Input: nums = [1, 2, 3, 4, 2, 3, 3, 5, 7]
Output: 2
```

## Key Idea
We can simply use a map that maps the number to its occurrence. However, for each operation, we need to check if all left elements are unique or not. To do this, it takes O(n).

However, if we remove elements that has 0 or 1 occurrence, then we can simply check a map is empty or not. This is possible because to us, the elements with 1 or 0 occurrence has no difference.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
