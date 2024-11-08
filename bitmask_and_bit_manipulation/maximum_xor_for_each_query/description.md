## Bitmask
Click [here](../notes.md) to go back to the notes page.

## LeetCode Question
Medium 1829

## Problem
You are given a sorted array `nums` of `n` non-negative integers and an integer `maximumBit`. You want to perform the following query `n` times:
1. Find a non-negative integer `k < 2^maximumBit` such that `nums[0] XOR nums[1] XOR ... XOR nums[nums.length - 1] XOR k` is maximized. `k` is the answer to the `ith` query.
2. Remove the last element from the current array `nums`.

Return an array `answer`, where `answer[i]` is the answer to the `ith` query.

## Example
```
Input: nums = [0, 1, 1, 3], maximumBit = 2
Output: [0, 3, 2, 3]
Explanation: The queries are answered as follows:
- 1st query: nums = [0, 1, 1, 3], k = 0 since 0 XOR 1 XOR 1 XOR 3 XOR 0 = 3
- 2nd query: nums = [0, 1, 1], k = 3 since 0 XOR 1 XOR 1 XOR 3 = 3
- 3rd query: nums = [0, 1], k = 2 since 0 XOR 1 XOR 2 = 3
- 4th query: nums = [0], k = 3, since 0 XOR 3 = 3
```

## Key Idea
Note, the maximum possible XOR request is always 2^(maximumBit) - 1.

So the answer for a prefix is the XOR of that prefix OXRed with 2^(maximumBit) - 1.

Then we can simply XOR all the numbers and XOR with the 2&(maximumBit) - 1.

Then, loop over each number from back to front and XOR with the sum that we track. Since a XOR a XOR b = b.

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)