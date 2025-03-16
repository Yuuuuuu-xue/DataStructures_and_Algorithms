## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2594

## Problem
You are given an integer array `ranks` representing the ranks of some mechanics. `ranks_i` is the rank of the `ith` mechanic. A mechanic with a rank `r` can repair `n` cars in `r * n^2` minutes.

You are also given an integer `cars` representing the total number of cars waiting in the garage to be repaired.

Return the minimum time taken to repair all the cars.

Note: All the mechanics can repair the cars simultaneously.

## Example
```
Input: ranks = [4, 2, 3, 1], cars = 10
Output: 16
Explanation:
- The first mechanic will repair two cars. The time required is 4 * 2 * 2 = 16 minutes
- The second mechanic will repair two cars. The time required is 2 * 2 * 2 = 8 minutes
- The third mechanic will repair two cars. The time required is 3 * 2 * 2 = 12 minutes
- The foruth mechanic will repair four cars. The time required is 1 * 4 * 4 = 16 minutes
```

## Key Idea
If we simplify the problem that given a number `k`, can we repair all the cars <= `k`?

To solve this problem, we can simply use a greedy solution. The greedy strategy is each mechanic can repair at most cars under `k` minutes and if this number >= car, we return `true`.

Then we can simply use a binary search between `n * n` and `max * n * n`.

## Complexity Analysis
- Runtime Complexity: O(n lg k) where k is max * n * n
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)