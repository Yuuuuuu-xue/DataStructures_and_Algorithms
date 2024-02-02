# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1291

## Problem
An integer has sequential digits if and only if each digit in the number is one more than the previous digit.

Return a sorted list of the integers in the range `[low, high]` inclusive that have sequential digits.

## Example
```
Input: low = 100, high = 300
Output: [123, 234]

Input: low = 1000, high = 13000
Output: [1234, 2345, 3456, 4567, 5678, 12345]
```

## Key Idea
For each digit `i` from `1` to `9`, try every sequential number pair i.e. `12`, `123`, `1234`, ..., `123456789` until the number > `high`.

At the end, sorted the output array.

## Solution
- [C++](solution.cpp)