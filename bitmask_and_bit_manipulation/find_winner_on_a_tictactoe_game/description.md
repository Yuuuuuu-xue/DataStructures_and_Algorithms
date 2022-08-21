## Bitmask
Click [here](../notes.md) to go back to the notes page.

## LeetCode Question
Easy 1275

## Description
Tic-tac-toe is played by two players `A` and `B` on a `3 x 3` grid. The rules of Tic-Tac-Toe are:
- Players take turns placing characters into empty squares `' '`.
- The first player `A` always places `X` characters, while the second player `B` always places `'O'` characters
- `'X'` and `'O'` characters are always placed into empty squares, never on filled ones
- The game ends when there are three of the same character filling any row, column, or diagonal
- The game also ends if all squares are non empty
- No more moves can be played if the game is over

Given a 2D integer array `moves` where `moves[i] = [row_i, col_i]` indicates that the `ith` move will be played on `grid[row_i][col_i]`, return the winner of the game if it exists (`A` or `B`). In case the game ends in a draw, return `"Draw"`. If there are still movements to play, return "Pending".

You can assume that `moves` is valid (i.e. it follows the rules of Tic-Taac-Toe), the grid is initially empty, and `A` will play first.

## Example
```
Input: moves = [[0, 0], [2, 0], [1, 1], [2, 1], [2, 2]]
Output: "A"
Explanation: A wins, they always paly first.
The board:
| X |   |   |
|   | X |   |
| O | O | X |
```

## Key Idea
We can obviously define a 3x3 matrix to solve this problem, however, we can solve this problem using two integers. Let `mask1` and `mask2` be bitmasks for player 1 and player 2 which will represent the grid[i][j] that player 1/2 will make. Then, the least 9 signiciant bits will be the game board.

We can:
- To place a piece, let i * 3 + j be the index and set this bit to 1 in the corresponding bitmask
- To check if a player can win, we can check:
  - Row 1 by: mask has 1 bit at indices 0, 1, 2
  - Col 1 by: mask has 1 bit at indices 0, 3, 6
  - Diagonal by: mask has 1 bit at indices 0, 4, 8
  - Anti-diagonal by: mask has 1 bit at indices 2, 4, 6 
- To check if draw iff:
  - mask1 | mask2 == 2 ^ 0 + 2 ^ 1 + ... 2 ^ 8 = 2 ^ 9 - 1.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)