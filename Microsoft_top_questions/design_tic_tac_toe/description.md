## LeetCode Question
Medium 348 (Premium)

## Description
Assume the following rules are for the tic-tac-toe game on an `n x n` board between two players:
1. A move is guaranteed to be valid and is placed on an empty block.
2. Once a winning condition is reached, no more moves are allowed.
3. A player who succeeds in placing `n` of their marks in a horizontal, vertical, or diagonal row wins the game.
Implement the `TicTacToe` class:
- `TicTacToe(int n)` initializes the object the size of the board `n`
- `int move(int row, int col, int player)` indicates that the player with id `player` plays at the cell `(row, col)` of the board. The move is guaranteed to be a valid move.

## Example
```
Input:
[["TicTacToe", "move", "move", "move", "move", "move", "move", "move"]]
[[3], [0, 0, 1], [0, 2, 2,], [2, 2, 1], [1, 1, 2], [2, 0, 1], [1, 0, 2], [2, 1, 1]]
Output:
[null, 0, 0, 0, 0, 0, 0, 1]
```

## Key Idea
We can obviously use a 2D array to represents the board and check if we can move in `O(n^2)`. However, note we can assume that the move is always valid. Thus, we can use a row and column set to keep track of player's. If player 1 and player 2 both place a piece on a row, then this row will not be a winning row. If a player placed pieces on a row/col/diagonal of `n` times, then this player wins.

## Complexity Analysis
- Time complexity: O(1)
- Space complexity: O(n)

## Solution
- [C++](solution.cpp)