## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2226

## Problem
Ypu are given a 0-indexed integer array `candies`. Each element in the array denotes a pile of candies of size `candies[i]`. You can divide each pile into any number of sub piles, but you cannot merge two piles together.

You are also given an integer `k`. You should allocate piles of candies to `k` children such that each child gets the same number of candies. Each child can be allocated candies from only one pile of candies and some piles of candies may go unused.

Return the maximum number of candies each child can get.

## Example
```
Input: candies = [5, 8, 6], k = 3
Output: 5
```

## Key Idea
If we modify the problem that given `k` children and `c` candies, we want to know if it's possible to divide the candies such that at least `k` children can get at least `c` candies.

Then simply use binary search to search between `0` and `max(candies)`.

## Complexity Analysis
- Runtime Complexity: O(n lg c) where c = max(candies)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)