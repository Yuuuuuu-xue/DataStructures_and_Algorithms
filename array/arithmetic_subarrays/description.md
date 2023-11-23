# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1630

## Problem
A sequence of numbers is called arithmetic if it consists of at least two elements, and the difference between every two consecutive elements is the same. More formally, a sequence `s` is arithmetic if and only if `s[i + 1] - s[i] == s[1] - s[0]` for all valid `i`.

For example, these are arithmetic sequences
```
1, 3, 5, 7, 9
7, 7, 7, 7
3, -1, -5, -9
```

The following sequence is not arithmetic
```
1, 1, 2, 5, 7
```

## Example
```
Input: nums = [4, 6, 5, 9, 3, 7], l = [0, 0, 2], r = [2, 3, 5]
Output: [true, false, true]
Explanation:
- 0th query: the subarray is [4, 6, 5] and this can be rearranged as [6, 5, 4] which is an arithmetic sequence
- 1st query: the subarray is [4, 6, 5, 9] and thus cannot be rearranged as an arithmetic sequence
- 2nd query: the subarray is [5, 9, 3, 7] and this can be rearranged as [3, 5, 7, 9] which ios an arithmetic sequence
```

## Key Idea
For each subarray, we can sort it and then verify it is the arithmetic.

## Solution
- [C++](./solution.cpp)