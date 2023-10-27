## LeetCode Problem
Easy 202

## Description
Write an algorithm to determine if a number `n` is happy.

A happy number is a number defined by the following process:
- Starting with any positive integer, replace the number by the sum of the squares of its digits
- Repeat the process until the number equals 1 (Where it will stay) or it loops endlessly in a cycle which does not include 1
- Those numbers for which this process ends in 1 are happy.

Return `true` if `n` is a happy number, and `false` otherwise.

## Example
```
Input: n = 19
Output: true
Explanation:
- 1^2 + 9^2 = 82
- 8^2 + 2^2 = 68
- 6^2 + 8^2 = 100
- 1^2 + 0^2 + 0^2 = 1

Input: n = 2
Output: false
```

## Key Idea
Simply repeat until the number is 1. We can use a hashset to keep track the seen number and if `n` exists in the hashset, then we can return false since it's a cycle.

## Solution
- [C++](./solution.cpp)