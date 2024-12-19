## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 769

## Problem
You are given an integer array `arr` of length `n` that represents a permutation of the integers in the range `[0, n - 1]`.

We split `arr` into some number of chunks (i.e. partions) and individually sort each chunk. After concatenating them, the result should equal the sorted array.

Return the largest number of chunks we can make to sort the array.

## Example:
```
Input: arr = [4, 3, 2, 1, 0]
Output: 1 
Explanation: Splitting into two or more chunks will not return the required result.

Input: arr = [1, 0, 2, 3, 4]
Output: 4
Explanation:
- We can split into two chunks such as [1, 0] and [2, 3, 4]
- Then split [2, 3, 4] into [2], [3], and [4]
```

## Key Idea
We can keep the chunk to be part of the sorted array.

so if we have this chunk `[1, 2, 0]`, we have to include all the chunk up to 2 (i.e. elements from up to 2).

The greedy strategy is that once we have all elements in the window that can be sorted, we stop it and use one chunk.

We can simply loop over the array and compared the number with its index.

If `currMax` in the window > `i`, then this means we need to include more elements in the chunk until we reach to the index. Once we reach to the index, we finish the chunk.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
