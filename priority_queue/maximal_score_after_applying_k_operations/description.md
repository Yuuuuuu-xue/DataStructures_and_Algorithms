## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2530

## Problem
You are given a 0-indexed integer array `nums` and an integer `k`. You have a starting score of `0`.

In one operation:
1. Choose an index `i` such that `0 <= i < nums.length`
2. Increase your score by `nums[i]`, and 
3. Replace `nums[i]` with `ceil(nums[i] / 3)`.

Return the maximum possible score you can attain after applying exactly `k` operations.

The ceiling function `ceil(val)` is the least integer greater than or equal to `val`.

## Example
```
Input: nums = [10, 10, 10, 10, 10], k = 5
Output: 50
Explanation: Apply the operation to each array element exactly once. The final score is 10 + 10 + 10 + 10 + 10 = 50.
```

## Key Idea
For each opearation, we can simply pop the maximal element in the array and update the score, then push back the updated element. This suggests us to use a max heap to solve this problem. 

## Complexity Analysis
- Runtime Complexity: O(k lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)