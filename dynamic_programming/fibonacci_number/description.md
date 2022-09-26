## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
Easy 509

## Problem
The Fibonacci numbers, commonly denoted `F(n)` form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from `0` and `1`. That is,
```
F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).
```

## Example
```
Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.

Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
```


## Key Idea 
Simply dp

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution:
- [C++](./solution.cpp)