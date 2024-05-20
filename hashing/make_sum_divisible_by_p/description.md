## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1590

## Problem
Given an array of positive integers `nums`, remove the smallest subarray (possibly empty) such that the sum of the remaining elements is divisible by `p`. It is not allowed to remove the whole array.

Return the length of the smallest subarray that you need to remove, or `-1` if it's impossible.

A subarray is defined as a contiguous block of elements in the array.

## Example
```
Input: nums = [3, 1, 4, 2], p = 6
Output: 1
Explanation: The sum of the elements in nums is 10, which is not divisible by 6. We can remove the subarray [4] and the sum of the remaining elements is 6 which is divisible by 6.
```

## Key Idea
If the sum of nums % p == 0, then we can return 0.

Otherwise, we need to remove a subarray `nums[i:j+1]` such that `sum(nums) - sum(nums[i:j+1]) % p == 0`. Which is the same as `sum(nums) % p == sum(nums[i:j+1]) % p` where we want to find the subarray such that sum of it equals to `sum(nums) % p`.

There are `O(n ^ 2)` of subarrays and we want to reduce the time complexity to `O(n)`, we will use some extra space to do some prefix sum `cur = sum(nums[0...i])`. We hope there is some prefix sum `prev=sum(nums[0...i])` such that `sum[nums[i...j]] = (curr - prev) % p == sum(nums) % p`.

We will use a similar topic to two sum where we will store `curr` prefix sum % p, and store its index as the value. Then, for each num, we update `curr` and check if `(curr - target) % p` exists in the map where `target = sum(nums) % p` in the map, if so then `j` is current index and `m[(curr - target) % p] = i` and we can keep track the minimum subarray size.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
- [Rust](./solution.rs)