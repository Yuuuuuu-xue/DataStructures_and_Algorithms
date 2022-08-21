## LeetCode Question
Easy 1304

## Description
Given an integer `n`, return any array containing `n` unique integers such that they add up to `0`. 

## Example
```
Input: n = 5
Output: [-7, -1, 1, 3, 4]
Explanations: there are also many other ways to construct the array

Input: n = 3
Output: [-1, 0, 1]

Input: n = 1
Output: [0]
```

## Key Idea
Notice we can always push a symmetric two values {-x, x} into the output array. If `n` is odd, then simply insert `0`.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(n)

## Solution
- [C++](solution.cpp)