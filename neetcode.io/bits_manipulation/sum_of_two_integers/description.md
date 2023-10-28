## LeetCode Problem
Medium 371

## Description
Given two integers `a` and `b`, return the suim of the two integers without using the operators `+` and `-`

## Example
```
Input: a = 1, b = 2
Output: 3

Input: a = 2, b = 3
Output: 5
```

## Key Idea
Since we are not allowed to use `+`, the hint is to use bit operator.

Note if we `a & b`, we can get all the bits that need a carry over.

Thus, we can get `carry = a & b`. Then if we do `a ^ b`, we get all the bits that is safe, no need to carry over. Then we can `b = carry << 1` since when we add two numbers both 1, we set the next bit to 1 and current bit to 0

## Complexity Analysis
- Runtime Complexity:
  - O(1)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)