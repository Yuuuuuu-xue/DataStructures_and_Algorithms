# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1716

## Problem
Hercy wants to save money from his car. He puts money in the Leetcode bank every day.

He starts by putting in `$1` on Monday, the first day. Every day from Tuesday to Sunday, he will put `$1` more than the day before. On every subsequent Monday, he will put `$1` more than previous Monday.

Given `n`, return the total amount of money he will have in the Leetcode bank at the end of the `nth` day.
  
## Example:
```
Input: n = 4
Output: 10
Explanation: After the 4th day, the total is 1 + 2 + 3 + 4 = 10

Input: n = 10
Output: 37
Explanation: 1 + 2 + 3 + 4 + 5 + 6 + 7 + 2 + 3 + 4 = 37
```

## Key Idea
Simple loop

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)
