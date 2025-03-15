## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2560

## Problem
There are several consecutive houses along a street, each of which has some money inside. There is also a robber, who wants to steal money from the homes, but he refuses to steal from adjacent homes.

The capability of the robber is the maximum amount of money he steals from one house of all the houses he robbed.

You are given an integer array `nums` represneting how much money is stashed in each house. More formally, the `ith` house from the left has `nums[i]` dollars.

You are also given an integer `k`, representing the minimum number of houeses the robber will steal from. It is always possible to steal at least `k` houses.

Return the minimum capability of the robber out of all the possible ways to steal at least `k` houses.

## Example
```
Input: nums = [2, 3, 5, 9], k = 2
Output: 5
Explanation:
There are three ways to rob at least 2 houses:
- Rob the houses at indices 0 and 2. Capability is max(nums[0], nums[2])
- Rob the houses at indices 0 and 3. Capability is max(nums[0], nums[3])
- Rob the houses at indices 1 and 3. Capability is max(nums[1], nums[3])
```

## Key Idea
If we reduce the problem into, given a number `k` and a number `c`, we want to know if we can rob at least `k` houses such that the capability is at most `c`.

If it works with `c`, then it means `c + 1, ..., max(nums)` work.

Thus, we can use a binary search to solve this problem.

To solve the subproblem, we can simply find the number of non-consecutive elements that with value <= c.

## Complexity Analysis
- Runtime Complexity: O(n lg c) where c = max(nums) - min(nums)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)