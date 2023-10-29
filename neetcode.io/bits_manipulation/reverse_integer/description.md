## LeetCode Problem
Medium 7

## Description
Given a singed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range `[2^-31, 2^31 - 1]`, return return `0`.

## Example
```
Input: x = 123
Output: 321

Input: x = -123
Output: -321

Input: x = 120
Output: 21
```

## Key Idea
Simply trraverse the each digit from back and update it to the output. We can get the last digit of `n` by `n % 10` and push to the output by `output = output * 10 + n % 10`. Then set `n = n / 10` to remove the last digit.

Note, we can check if the given the number is positive or negative, then use the absolute value to continue updating the bits.

## Complexity Analysis
- Time Complexity: O(1) since the number bits is fixed by a number
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)