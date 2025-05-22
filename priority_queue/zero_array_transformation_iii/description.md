## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3362

## Problem
You are given an integer array `nums` of length `n` and a 2D array `queries` where `queries[i] = [l_i, r_i]`.

Each `queries[i]` represents the following action on `nums`:
- Decrement the value at each index in the range `[l_i, r_i]` in `nums` by at most 1.
- The amount by which the value is decremented can be chosen independently for each index.

A zero array is an array with all its elements equal to 0.

Return the maximum number of elements that can be removed from `queries`, such that `nums` can still be converted to a zero array using the remaining queries. If it is not possible to convert `nums` to a zero array, return -1.

## Example
```
Input: nums = [2, 0, 2], queries = [[0, 2], [0, 2], [1, 1]]
Output: 1
Explanation: We can remove queries[2]
```

## Key Idea
We can use two heaps to solve this problem.

One `available` heap that represents the available queries that is possible to use. It will be a max heap of the `r`. Every time we need to use a query to remove current element, we pop an item from `available` heap. The key idea is that among all the available queries that can decrement element at index `i`, then we want to chose the query with largest ending index.

Now, we have another heap `active` that represents the current possible queries to remove index `i`. It will be a min heap of index `r`. This is because at each iteration, we want to remove the queries that is not possible to cancel the index `i` which means we need to start from the min value.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)