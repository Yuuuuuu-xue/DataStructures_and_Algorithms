# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2264

## Problem
You are given a string `num` representing a large integer. An integer is good if it meets the following conditions:
- It is a substring of `num` with length `3`
- It consists of only one unique digit

Return the maximum good integer as a string or an empty string `""` if no such integer exists.

Note:
- A substring is a contiguous sequence of characters within a string
- There may by leading zeroes in `num` or a good integer.

## Example
```
Input: num = "6777133339"
Output: "777"
Explanation: "777" and "333" are both valid but "777" is the largest
```

## Key Idea
Simply traverse, get all the triples that work, keep track the maximum.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
