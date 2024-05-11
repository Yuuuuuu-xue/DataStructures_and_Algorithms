## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 857

## Problem
There are `n` workers. You are given two integer array `quality` and `wage` where `quality[i]` is the quality of the `ith` worker and `wage[i]` is the minimum wage expectation for the `ith` worker.

We want to hire exactly `k` workers from a paid group. To hire a group of `k` workers, we must pay them according to the following rules:
1. Every worker in the paid group must be paid at least their minimum wage expectation
2. In the group, each worker's pay must be directly proportional to their quality. This means if a worker's quality is double that of another worker in the group, then they must be paid twice as much as the other worker

Given the integer `k`, return the least amoung of money needed to form a paid group satisfying the above conditions. Answer within `10^-5` of the actual answer will be accepted.

## Example
```
Input: quality = [10, 20, 5], wage = [70, 50, 30], k = 2
Output: 105
Explanation: We pay 70 to 0th worker and 35 to 2nd worker

Input: quality = [3, 1, 10, 10, 1], wage = [4, 8, 2, 2, 7], k = 3
Output: 30.66667
Explanation: We pay 4 to the 0th worker, 13.33333 to 2nd and 3rd workers separately.
```

## Key Idea
Note, the total number cost of all wage will be the maximum ratio (wage / quality) * all the quality for all workers.

Then we can use a min heap to keep track of all the ratio. Then we pop all the items from min heap and for each item, we increment the total number of qualities and push the current quality to a max heap. When the number of workers is greater than `k`, we pop the highest quality from max heap and decrement the total number of qualities. If the number of workers is equal to `k`, then we can calculate the minimum cost.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
