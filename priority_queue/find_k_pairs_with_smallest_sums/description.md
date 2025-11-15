## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## Problem
You are given two integer arrays `nums1` and `nums2` sorted in non-decreasing order and an integer `k`.

Define a pair `(u, v)` which consists of one element from the first array and one element from the secondary array.

Return the `k` pairs `(u1, v1), (u2, v2), ..., (uk, vk)` with the smallest sums.

## Example
```
Input: nums1 = [1, 7, 11], nums2 = [2, 4, 6], k = 3
Output: [[1, 2], [1, 4], [1, 6]]
Explaination: The first 3 pairs are returned from the sequence: [1, 2], [1, 4], [1, 6], [7, 2], [7, 4], [11, 2], [7, 6], [11, 4], [11, 6]
```

## Key Idea
Note the key idea is always if we add pair `(i, j)`, then if the next possible pairs are
- `(i + 1, j)`
- `(i, j + 1)`
We can push them to the heap and pop the one with smallest value, then push back the new pair.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)