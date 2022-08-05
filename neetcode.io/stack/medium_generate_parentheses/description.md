## LeetCode Problem
Medium 22

## Description
Given `n` pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

## Example
```
Input: n = 3
Output: ["((()))", "(()())", "(())()", "()()()"]

Input: n = 1
Output: ["()"]
```

## Basic Idea
We will use dynamic programming to solve this problem. Let dp[i] represents a list of well-formed parentheses using i pairs. Then to build `i` pairs, notice we will need `(left part + right part)` of all combinations. Thus we will need to loop the left part of using `0` to `i - 1` pairs and right part of using `i - 1 - num of left side pairs` to construct the number of parentheses. We can construct it by curr = `(left)right`. At the end, simply return dp[n] to get the final solution.

## Solution
- [C++](./solution.cpp)