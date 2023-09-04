## LeetCode Problem
Medium 45

## Description
You are given a 0-indexed array of integers `nums` of length `n`. You are initially positioned at `nums[0]`.

Each element `nums[i]` represents the maximum length of a forward jump from index `i`. In other words, if you are at `nums[i]`, you can jump to any `nums[i + j]` where:
- `0 <= j <= nums[i]` and
- `i + j < n`

Return the minimum number of jumps to reach `nums[n - 1]`. The test case are generated such that you can reach `nums[n - 1]`.

## Example
```
Input: nums = [2, 3, 1, 1, 4]
Output: 2
Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.
```

## Basic Idea
We will solve this problem via Greedy algorithm. Our greedy strategy is to keep `m` = the current maximum possible we can reach and `prevM` be the maximum possible we can reach after we took another step. Then if `i > prevM`, this means we have to take another jump where the next maximum possible we can reach is `m`.

## Complexity Analysis
- Runtime Complexty: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)