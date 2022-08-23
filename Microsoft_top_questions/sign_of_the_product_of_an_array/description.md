## LeetCode Question
Easy 1822

## Description
There is a function `signFunc(x)` that retruns:
- `1` if `x` is positive
- `-1` if `x` is negative
- `0` if `x` is equal to `0`

You are given an integer array `nums`. Let `product` be the product of all values in the array `nums`. Reutrn `signFunc(product)`.

## Example
```
Input: nums = [-1, -2, -3, -4, 3, 2, 1]
Output: 1
Explanation: the product of all values in the array is 144, and signFunc(144) = 1

Input: nums = [1, 5, 0, 2, -3]
Output: 0
Explanation: the product of all values in the array is 0, and signFunc(0) = 0

Input: nums = [-1, 1, -1, 1, -1]
Output: -1
Explanation: the product of all values in the array is -1 and signFunc(-1) = -1
```

## Key Idea
Let `num` be the number of negatives in the input array and we will traverse though the input array. If we see any number is 0 then we can return 0 immediately. Increment `num` if we see any of negative numbers. At the end, return `1` if `num` is even otherwise `-1`.

## Complexity Analysis
- Time complexity: O(n)
- Space complxity: O(1)

## Solution
- [C++](solution.cpp)