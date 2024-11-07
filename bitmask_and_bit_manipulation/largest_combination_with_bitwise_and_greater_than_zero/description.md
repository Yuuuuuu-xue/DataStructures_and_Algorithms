## Bitmask
Click [here](../notes.md) to go back to the notes page.

## LeetCode Question
Medium 2275

## Problem
The bitwise AND of an array `nums` is the bitwise AND of all integers in `nums`.
- For example, for `nums = [1, 5, 3]`, the bitwise AND is equal to `1 & 5 & 3 = 1`
- Also, for `nums = 7`, the bitwise AND is `7`

You are given an array of positive integers `candidates`. Evaluate the bitwise AND of every combination of numbers of `candidates`. Each number in `candidates` may only be used once in each combination.

Return the size of the largest combination of `candidates` with a bitwise AND greater than `0`.

## Example
```
Input: candidates = [16, 17, 71, 62, 12, 24, 14]
Output: 4
Explanation: The combination [16, 17, 62, 24] has a bitwise AND of 16 & 17 & 62 & 24 = 16 > 0.
```

## Key Idea
The number of numbers we can & and > 0 depends on if at least one bit is `1`  for all numbers. Thus, we can simply loop over each number bit by bit and count how many number has `ith` bit with a value of `1`. The maximum number will be the solution.

Since max(candidates) <= 10^7, which is is < 2^24, thus we need to check at most 24 bits.

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)