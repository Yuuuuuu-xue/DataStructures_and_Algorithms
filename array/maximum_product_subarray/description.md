# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## Problem
Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

## Example
```
Input: [2, 3, -2, 4]
Output: 6
Explanation: [2, 3] has the largest product 6
```

## Key Idea
Since this question asks about product and negative numbers are allowed. We can keep track of max number (i.e. we may have the greatest positive number) and min number (i.e. we may have smallest negative number), so when we multiply the current number to those numbers, we can calculate the current maximum product. 

## Solution
- [Python Solution](maximum_product_subarray.py)