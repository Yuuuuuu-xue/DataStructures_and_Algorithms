## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## Problem
There is a special kind of apple tree that grows apples every day for `n` days. On the `ith` day, the tree grwos `apples[i]` apples that will rot after `days[i]` days, that is on day `i + days[i]` the apples will be rotten and cannot be eaten. On some days, the apple tree does not grow any apples, which are denoted by `apples[i] == 0` and `days[i] == 0`.

You decided to eat at most one apple a day (to keep the doctors away). Note that you can keep eating after first `n` days.

Given two integer arrays `days` and `apples` of length `n`, return the maxium number of apples you can eat.

## Example
```
Input: apples = [1, 2, 3, 4, 2], days = [3, 2, 1, 4, 2]
Output: 7
```

## Key Idea
A greedy strategy: we eat apples that will be closed to rotten first.

Hence, we will use a min heap to track when the apples will be rotten and number of apples and we try to eat all the possible apples.

However, we cannot iterate over all the apples since some apples need to grow days i, hence we need to iterate over the array and track. 

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)