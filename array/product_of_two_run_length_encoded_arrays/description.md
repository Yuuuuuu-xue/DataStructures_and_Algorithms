# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1868 (Premium)

## Problem
Run-length encoding is a compression algorithm that allows for an integer array `nums` with many segments of consecutive repeated numbers to be represented by a (generally smaller) 2D array `ecoded`. Each `encoded[i] = [val_i, freq_i]` describes the `ith` segment of repeated numbers in `nums` where `val_i` is the value that is repeated `freq_i` times. For example, `nums = [1, 1, 1, 2, 2, 2, 2, 2]` is represented by the run-length encoded array `encoded = [[1, 3], [2, 5]]`. Another way to read this is "three `1`'s followed by five `2`'s".

The product of two run-length encoded arrays `encoded1` and `encoded2` can be calculated using the following steps:
1. Expand both `encoded1` and `encoded2` into the full arrays `nums1` and `nums2` respectively.
2. Create a new array `prodNums` of length `nums1.length` and set `prodNums[i] = nums1[i] * nums2[i]`.
3. Compress `prodNums` into a run-length encoded array and return it.

You are given two run-length encoded arrays `encoded1` and `encoded2` representing full arrays `nums1` and `nums2` respeectively. Both `nums1` and `nums2` have the same length. Each `encoded1[i] = [val_i, freq_i]` describes the `ith` segment of `nums1`, and each `encoded2[j] = [val_j, freq_j]` describes the `jth` segment of `nums2`.

Return the product of `encoded1` and `encoded2`.

## Examples:
```
Input: encoded1 = [[1, 3], [2, 3]], encoded2 = [[6, 3], [3, 3]]
Output: [[6, 6]]
Explanation: encoded1 expands to [1, 1, 1, 2, 2, 2] and encoded2 expands to [6, 6, 6, 3, 3, 3]. prodNums = [6, 6, 6, 6, 6, 6], which is compressed into the run-length encoded array [[6, 6]].

Input: encoded1 = [[1, 3], [2, 1], [3, 2]], encoded2 = [[2, 3], [3, 3]]
Output: [[2, 3], [6, 1], [9, 2]]
Explanation: encoded1 expands to [1, 1, 1, 2, 3, 3] and encoded2 expands to [2, 2, 2, 3, 3, 3]. prodNums = [2, 2, 2, 6, 9, 9], which is compressed into the run-length encoded array [[2, 3], [6, 1], [9, 2]]
```

## Basic Idea
The key idea for this question is that: we don't really need to expand any of the array and we can directly calculate the encoded arrays using two pointers technique. Let i = 0 and j = 0 be two pointers respectively. Let curr_i and curr_j be two numbers of remaining frequency. Initially i = 0 and curr_i = encoded1[i][1] and j = 0 and curr_j = encoded2[j][1]. For each iteration, let min_freq = min(curr_i, curr_j). Update curr_i -= min_freq and curr_j -= min_freq and push calcualte the product with this min_freq and push it to the target output array. Notice, if target output array is not empty and last item has the same product value, then we will accumulate the freq and not push it.

## Solution
- [C++](./solution.cpp)