# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 51

## Problem
The `n-queens` puzzle is the problem of placing `n` queens on an `n x n` chessboard such that no two queens attack each other. Given an integer `n`, return all sdistinct solutions to the n-queens puzzle. You may retur nthe answer in any order. Each solution contains a dsitinct board configuration of the nqueens' placement, where `Q` and `.` both indicates a queen and an empty space, respectively.


## Example
```
Input: n = 4
Output: [
  [".Q..",
   "...Q",
   "Q...",
   "..Q."],
  ["..Q.",
   "Q...",
   "...Q",
   ".Q..]
]

Input: n = 1
Output: [["Q"]]
```

## Key Idea
Since we need all possible ways to place queens, we will use a backtrack to try out all the possible ways to place Queen. In order to place a queen on a row `i` and column`j`, notice for each row, we will only place one queen. Then we only need to check for columns and two diagonals. We can use a hashmap that maps the columns `Cj`, diagonals `Di + j`, and antidiagonals `Ai - j` map to a boolean value indicating a queen is placed on here. Then for row, we check if placing a queen and check if the column, diagonal, and anti-diagonal are all false, if so we can place the queen. Otherwise, we cannot place a queen at row `i` and column `j`. If we place a queen at row `i` and column `j`, we need to update the map, move to the next row. If we reach to the maximum row, then we can append the current board to the output array. If we return from the recursion, we can reverse the change of the map (backtrack) and try the next column.

## Solution
- [C++](./solution.cpp)