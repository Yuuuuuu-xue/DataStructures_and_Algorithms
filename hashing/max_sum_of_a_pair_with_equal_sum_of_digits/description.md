## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2342

## Problem
You are given a 0-indexed array `nums` consisting of positive integers. You can choose two indices `i` and `j`, such that `i != j`, and the sum of digits of the number `nums[i]` is equal to that of `nums[j]`.

Return the maximum value of `nums[i] + nums[j]` that you can obtain over all possible indices `i` and `j` that satisfy the conditions.

## Example
```
Input: nums = [18, 43, 36, 13, 7]
Output: 54
Explanation: Possible pairs are
- (0, 2) both numbers have a sum of digits equal to 9, and their sum is 54
- (1, 4) both numbers have a sum of digits equal to 7, and their sum is 50
```

## Key Idea
We can simply loop over the numbers and compute the sum of its digits. Use a map to map prev element with the same sum and max value. If it exists in the map, update the solution and map.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)