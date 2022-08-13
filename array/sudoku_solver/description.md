# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 37

## Problem
Write a program to solve a Sudoku puzzle by filling the empty cells. A sudoku solution must satisfy all of the following rules:
1. Each of the digits `1-9` must occur exactly once in each row.
2. Each of the digits `1-9` must occur exactly once in each column.
3. Each of the digits `1-9` must occur exactly once in each of the 9 `3x3` sub-boxes of the grid.

The `'.'` character indicates empty cells.

You can assume the question is guaranteed that the input board has only one solution.

## Example
```
Input:
  [["5","3",".",".","7",".",".",".","."],
   ["6",".",".","1","9","5",".",".","."],
   [".","9","8",".",".",".",".","6","."],
   ["8",".",".",".","6",".",".",".","3"],
   ["4",".",".","8",".","3",".",".","1"],
   ["7",".",".",".","2",".",".",".","6"],
   [".","6",".",".",".",".","2","8","."],
   [".",".",".","4","1","9",".",".","5"],
   [".",".",".",".","8",".",".","7","9"]]

Output:
  [["5","3","4","6","7","8","9","1","2"],
   ["6","7","2","1","9","5","3","4","8"],
   ["1","9","8","3","4","2","5","6","7"],
   ["8","5","9","7","6","1","4","2","3"],
   ["4","2","6","8","5","3","7","9","1"],
   ["7","1","3","9","2","4","8","5","6"],
   ["9","6","1","5","3","7","2","8","4"],
   ["2","8","7","4","1","9","6","3","5"],
   ["3","4","5","2","8","6","1","7","9"]]
```

## Key Idea
Since we need to try out the possible ways to solve a board, we need to try a value and then try the next value until we no longer have the ways to solve it, then we need to remove the values we tried and try another value. This immediately stands out that we need to use backtracking to solve this problem. Let `m` be a map that maps the rowKey, colKey, and each subSquareKey to a hashset. We will first loop each element in the given board, if element is not `.`, then we update the hashmap and will not backtrack. The keys are:
- 'R{i}'
- 'C{j}'
- 'S[i % 3 * 3 + j % 3].'
Then we will loop each element again and check if the element has a value of `.` and try to assign the values and backtrack.

## Solution
- [C++](./solution.cpp)