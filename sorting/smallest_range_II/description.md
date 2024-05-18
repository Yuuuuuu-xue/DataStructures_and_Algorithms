## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 910

## Problem
You are given an integer array `nums` and an integer `k`.

For each index `i` where `0 <= i < nums.length`, change `nums[i]` to be either `nums[i] + k` or `nums[i] - k`.

The score of `nums` is the difference between the maximum and minimum elements in `nums`.

Return the minimum score of `nums` after changing the values at each index.

## Example
```
Input: nums = [1], k = 0
Output: 0
Explanation: The score is max - min = 0

Input: nums = [0, 10], k = 2
output: 6
Explanation: Change the num to [0 + 2, 10 - 2] = [2, 8], the score is max - min = 8 - 2 = 6

Input: nums = [1, 3, 6], k = 3
Output: 3
Explanation: Change the num to [1 + 3, 3 + 3, 6 - 3] = [4, 6, 3], the score is max - min = 6 - 3 = 3
```

## Key Idea
We will first of all sort the number from smallest to largest. Then we know the initial pair can be `nums[-1] - nums[0]`. Then, for each pair number `(i, i + 1)`, we want the max to be `nums[-1] - k` or `nums[i] + k`. The min can be `nums[0] + k` or `nums[i + 1] - k`.

This works because if both `nums[i]` and `nums[i + 1]` can + k are both smaller than `nums[-1] - k`, then they won't be selected as the max or min. Same argument applies to the other direction.

It happens only when we add `nums[i] + k` and `nums[i + 1] - k` becomes a new maximum or a new minimum, then the solution is updated.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)
