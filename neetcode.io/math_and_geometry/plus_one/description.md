## LeetCode Problem
Easy 66

## Description
You are given a large integer represented as an integer array `digits` where each `digits[i]` is the `ith` digit of the integer. The digits are ordered from most significant to least significant in left-to-righjt order. The large integer does not contain any leading `0`s.

Increment the large integer by one and return the resulting array of digits.

## Example
```
Input: digits = [1, 2, 3]
Output: [1, 2, 4]
Explanation: 123 + 1 = 124

Input: digits = [4, 3, 2, 1]
Output: [4, 3, 2, 2]

Input: digits = [9]
Output: [1, 0]
```

## Key Idea
Simply traverse the array from back to front, if the number is `9`, then set it to 0 and set `carrayOver` to `true`. Iterate until `carrayOver` is false and return the number. 

If at the end, `carryOver` is still true, this means we need to insert `1` at the front of the array.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)