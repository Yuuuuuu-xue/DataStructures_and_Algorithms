## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 773

## Problem
On an `2 x 3` board, there are five tiles labeled from `1` to `5`, and an empty square represented by `0`. A move consists of choosing `0` and a 4-directionally adjacent number and swapping it.

The state of the board is solved if and only if the board is `[[1, 2, 3], [4, 5, 0]]`

Given the puzzle board `board`, return the least number of moves required so taht the state of the board is solved. If it is possible for the state of the board to be solved, return `-1`.

## Example
Input: board = [[1, 2, 3], [4, 0, 5]]
Output: 1
Explanation: Swap the 0 and the 5 in one move.

## Key Idea
The key idea is that we can simply use a BFS to solve the problem and return the minimum number of steps needed.

To represent current state, we can simply convert the board to a string.

For example, convert [[1, 2, 3], [4, 0, 5]] to "123405".

Then for each number, we can simply record which index we can swap with:
- 0: [1, 3]
- 1: [0, 2, 4]
- 2: [1, 5]
- 3: [0, 4]
- 4: [1, 3, 5]
- 5: [2, 4]

## Complexity Analysis
- Runtime Complexity: O(4 * n ^ 2)
- Space Complexity: O(n^2)

## Solution
- [Python](./solution.py)