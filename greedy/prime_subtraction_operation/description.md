## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2601

## Problem
You are given a 0-indexed integer array `nums` of length `n`.

You can perform the following operation as many times as you want:
- Pick an index `i` that you haven't picked before, and pick a prime `p` strictly less than `nums[i]`, then subtract `p` from `nums[i]`.

Return `true` if you can make `nums` a strictly increasing array using the above operation and `false` otherwise.

## Example
```
Input: nums = [4, 9, 6, 10]
Output: true
Explanation: 
- In the first operation, pick `i = 0` and `p = 3`, and then subtract 3 from nums[0], so that nums become [1, 9, 6, 10]
- In the second operation, i = 1, p = 7, subtract 7 from nums[1], so nums becomes equal to [1, 2, 6, 10]
- After the second operation, nums is sorted in strictly increasing order, so the answer is true.
```

## Key Idea
Assume `num[i] <= 1000`, then we can simply compute a list of prime numbers less than 1000 beforehand.

Then we can simply loop over the number in the array, for each number, the greedy strategy is to pick the largest prime number and subtract it from `nums[i]` such that it's greater than `nums[i - 1]`. To achieve that, we can use a binary search to find the largest prime number that is less than or equal to `nums[i] - nums[prev]`.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)