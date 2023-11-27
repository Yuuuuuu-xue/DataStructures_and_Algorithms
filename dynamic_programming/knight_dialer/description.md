## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
Medium 935

## Problem
The chess knight has a unique movement, it may move two squares vertically and one square horizontally, or two square horizontally and one square vertically (with both forming the shape of an L). The possible movements of chess knight are shown in this diagram:

We have a chess kngith and a phone pad as shown below, the knight can only stand on a numeric cell:
```
1 2 3
4 5 6
7 8 9
* 0 #
```
Given an integer `n`, return how many distinct phone numbers of length `n` we can dial.

You are allowed to place the knight on any numeric cell initially and then you should perform `n - 1` jumps to dial a number of length `n`. All jumps should be valid knight jumps.

As the answer may be very large, return the answer modulo `10**9 + 7`.

## Example
```
Input: n = 1
Output: 10
Explanation: We need to dial a number of length 1, so placing the knight over any numeric cell of the 10 cells is sufficient.

Input: n = 2
Output: 20
Explanation: All the valid number we can dial are [04, 06, 16, 18, 27, 29, 34, 38, 40, 43, 49, 60, 61, 67, 72, 76, 81, 83, 92, 94] 
```

## Key Idea
Given a position `(i, j)`, we know the possible next positions are
- `(i + 2, j + 1)`
- `(i + 2, j - 1)`
- `(i - 2, j + 1)`
- `(i - 2, j - 1)`
- `(i + 1, j + 2)`
- `(i + 1, j - 2)`
- `(i - 1, j + 2)`
- `(i - 1, j - 2)`

Given a position `(i, j)`, we can try to jump to all the directions and if possible, then decrement `n - 1`, at the end, if we successfully jump to a position with `n = 0`, then we found one possible dial path. Note, with given position `(i, j)` and `n`, it depends on the `n - 1`, and thus, it gives us a hint to use dynamic programming on `(i, j, n)`.

## Complexity Analysis
- Runtime Complexity: O(n) since i < 4 and j < 3
- Space Complexity: O(n)

## Solution:
- [C++](./solution.cpp)