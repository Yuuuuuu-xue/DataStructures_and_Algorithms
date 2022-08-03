## LeetCode Problem
Medium 15

## Description
Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

## Example
```
Input: nums = [-1, 0, 1, 2, -1, -4]
Output: [[-1, -1, 2], [-1, 0, 1]]
Explanation:
- nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0
- nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0
- nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0
The distinct triplets are [-1, 0, 1] and [-1, -1, 2].
Notice that the order of the output and the order of the triplets does not matter.

Input: nums = [0, 1, 1]
Output: []
Explanation: The only possible triplet does nto sum up to 0.

Input: nums = [0, 0, 0]
Output: [[0, 0, 0]]
Explanation: The only possible triplet sums up to 0.
```

## Basic Idea
The key idea for this problem is `nums[i] = nums[j] + nums[k]`. We will sort the input array to guarantee that `i < j < k`. Then we will loop over each i, and convert this question into two sum with input array is sorted. So we want to find two elements `nums[j]` and `nums[k]` such that `nums[j] + nums[k]` = `-nums[i]`. To avoid duplicate entry, we will keep track prevNumLeft and prevNumRight so if nums[j] is same as prevNumLeft, then increment j and if nums[k] is prevNumRight, then decrement k.

Notice, when we loop over i, if nums[i] is > 0, then we can end the iteration here. This is because the input array is sorted so that `0 < nums[i] < nums[j] < nums[k]` implies `nums[i] + nums[j] + nums[k] > 0`.

## Solution
- [C++](./solution.cpp)