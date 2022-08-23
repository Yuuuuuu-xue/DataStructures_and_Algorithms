## LeetCode Question
Hard 2035

## Description
You are given an integer array `nums` of 2 * n integers. You need to partition `nums` into two arrays of length `n` to minimize the absolute difference of the sums of the arrrays. To partition `nums`, put each element of `nums` into one of the two arrays. Return the minimum possible absolute difference.

## Example
```
Input: nums = [3, 9, 7, 3]
Output: 2
Explanation: One optimal partition is [3, 9] and [7, 3]
The absolute difference between the sum of the arrays is abs((3 + 9) - (8 + 3)) = 2.

Input: nums = [-36, 36]
Output: 72
The optimal partition is [-36] and [36]
The absolute difference between the sum of the array is abs((-36) - 36) = 72.

Input: nums = [2, -1, 0, 4, -2, -9]
Output: 0
Explanation: One optimal partition is [2, 4, -9] and [-1, 0, 2]. The absolute difference between the sums of the array is abs((2 + 4 - 9) - (-1 + 0 + 2)) = 0.
```

## Key Idea
Notice we want to get both arrays closer to the `sum(nums) / 2` as possible to minimize the absolute difference. We will try to pick divide the `nums` into two equal length of the array `nums1` and `nums2`. Then we will try to build the first array by picking `0 <= k <= nums1.size()` from the `nums1` and then `n - k` elements from `nums2`. Let `m1` be a map that maps the possible `k` element to a list of possible sum from the first array with `k` elements. Similarly we will also build a `m2` but this time we will map the possible `k` elements to a list of possible sum from the second array with `k` elements in non-decreasing order. 

After building two pre-computed maps, we will try all possible pair of sum. Suppose we will try to choose `k` elements from `nums1` with sum `s1`, then we will choose the rest of `n - k` elements from `nums2` and choose a `s2` such that `s1 + s2` is closer to the `sum(nums) / 2`. Note the array of `m[n - k]` is sorted, thus, we can perform a binary search to find the closets element.

## Solution
- [C++](solution.cpp)