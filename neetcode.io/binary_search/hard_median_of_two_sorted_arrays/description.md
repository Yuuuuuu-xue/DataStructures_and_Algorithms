## LeetCode Problem
Hard 4

## Description
Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return the median of the two sorted arrays. The overall runtime complexity should be `O(log (m + n))`.

## Example
```
Input: nums1 = [1, 3], nums2 = [2]
Output: 2.00000

Input: nums1 = [1, 2], nums2 = [3, 4]
Output: 2.50000
Explanation: merged array = [1, 2, 3, 4] and median is (2 + 3) / 2 = 2.5
```

## Basic Idea
Notice the required time complexity is `O(log (m + n))` and two arrays are sorted, this gives a hint of using the binary search to solve this question. We will use the idea of finding the kth smallest element in two sorted arrays.

First of all, consider q question that provides an index k (0 index based) and two sorted arrays, we want to find the kth smallest element in the merged two sorted arrays. Then, notice the kth smallest element has to be in either `nums1` or `nums2`. Thus, we can check:
- If `nums1` is empty, then return `nums2[k]`
- If `nums2` is empty, then return `nums1[k]`
- Otherwise, let `mid1` and `mid2` be mid pointers of `nums1` and `nums2`.
  - If `mid1 + mid2 < k`, then if `nums1[mid1] <= nums2[mid2]`, we can get rid of left side of nums1 and move it to the right side. Otherwise, we can get rid of the left side of nums2.
  - If `mid1 + mid2 >= k`, then if `nums1[mid1] >= nums2[mid2]`, we can get rid of the right side of nums1 and move it to the left side. Otherwise, we can get rid of the right side of nums2.`

At the end, simply divide into odd and even cases.
- If odd case, find the (m + n) / 2 smallest element and that is our final solution
- If even case, find the (m + n) / 2 and (m + n) / 2 - 1, and calculate the average

## Solution
- [C++](./solution.cpp)