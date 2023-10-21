## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1425

## Problem
Given an integer array `nums` and an integer `k`, return the maximum sum of a non-empty subsequence of that array such that for every two consecutive integers in the subsequence, `nums[i]` and `nums[j]`, where `i < j`, the condition `j - i <= k` is satisfied.

A subsequence of an array is obtained by deleting some number of elements (can be zero) from the array, leaving the remaining elements in their original order.

## Example
```
Input: nums = [10, 2, -10, 5, 20], k = 2
Output: 37
Explanation: the subsequence is [10, 2, 5, 20]

Input: nums = [-1, -2, -3], k = 1
Output: -1
Explanation: the subsequence must be non-empty, so we choose the largest number -1

Input: nums = [10, -2, -10, -5, 20], k =2
Output: 23
Explanation: The subsequence is [10, -2, -5, 20]
```

## Key Idea
Let's updated `nums` in-place to save `O(n)` space. While we traversing `nums`, we will let `nums[i]` be the maximum sum of subsequence of an array from index 0 to i. Thus, at the end, `max(nums)` is the final solution that we are looking for.

While we traversing the array, let `dq` be a deque containing indexes such that the front of the `dq` is the maximum sum of subsequence within the `k` window. Then, we can simply update `nums[i] += nums[dq.front()]`. Then we need to update the `dq`. While `i - dq.front() >= k`, then we pop the front item from the deque. This will remove all the max items that is no longer within the range. Then while `nums[i] >= nums[dq.back()]`, we pop the back item from the deque. This will remove all the smaller items from the queue that is less than `nums[i]`. Then, if `nums[i]` is `> 0`, we push it to the deque. This guarantees that the deque is maintained in a sorted order and all within the range.

## Runtime Complexity
- O(n) since each element is pushed and poped to the deque at most once
- O(k) since the deque needs to maintain the range

## Solution
- [C++](./solution.cpp)