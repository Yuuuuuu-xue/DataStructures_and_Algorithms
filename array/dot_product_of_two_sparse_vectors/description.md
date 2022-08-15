# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1570 (Premium)

## Problem
Given two sparse vectors, compute their dot product. Implement class `SparseVector`:
- `SparseVector(nums)` initializes the object with the vector `nums`
- `dotProduct(vec)` compute the dot product between the instance of `SparseVector` and `vec`

A sparse vector is a vector that has mostly zero values, you should store the sparse vector efficiently and compute the dot product between two SparseVector.

## Example
```
Input: nums1 = [1, 0, 0, 2, 3], nums2 = [0, 3, 0, 4, 0]
Output: 8
Explanation: v1.dotProduct(v2) = 1*0 + 0*3 + 0*0 + 2*4 + 3*0 = 8

Input: nums1 = [0, 1, 0, 0, 0], nums2 = [0, 0, 0, 0, 2]
Output: 0
```

## Key Idea
Since a vector has mostly value of 0, then we simply do not store the value that has 0 since in dot product, it will be 0. Then, for given an array `nums`, we will store a list of pairs containing the index and values where the value is not 0. To compute the dot product, we can simply have two pointer, if the two pointer have the same index, then compute the product and accumulate it to the output sum. If pointer1's index < pointer2's index, then increment pointer1 or vice versa. Return the sum when we reach to the end of pointer1 or pointer2.

## Solution
- [C++](solution.cpp)