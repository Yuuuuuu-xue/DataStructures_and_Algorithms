## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1482

## Problem
You are given an integer array `bloomDay`, an integer `m` and an integer `k`.

You want to make `m` bouquets. To make a bouquet, you need to use `k` adjacent flowers from the garden.

The garden consists of `n` flowers, the `ith` flower will bloom in the `bloomDay[i]` and then can be used in exactly one bouquet.

Return the minimum number of days you need to wait to be able to make `m` bouquets from the garden. If it is impossible to make m bouquets return `-1`.

## Example
```
Input: bloomDay = [7, 7, 7, 7, 12, 7, 7], m = 2, k = 3
Output: 12
Explanation: We need 2 bouquets each should have 3 flowers. Here is the garden after 7 and 12 days:
- After day 7: [x, x, x, x, _, x, x], we can make one bouquet of the first three flowers that bloomed
- After day 12: [_, _, _, x, x, x, x], we can make another bouquet.
```

## Key Idea
If we simplify the problem such that given `bloomDay`, `m`, `k`, and `d`, we can to know if it is possible to form `m` bouquets within `d` days. Then this problem becomes easy, we can simply loop over the `bloomDay` and try to form the bouquets if possible.

Then, since min possible day is `0` and max possible day is `max(bloomDay)`, we can simply use binary search to solve this problem.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)