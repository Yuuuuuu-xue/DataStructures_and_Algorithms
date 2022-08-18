## LeetCode Question
Medium 49

## Description
Given an `m x n` grid of characters `board` and a string `word`, return `true` if `word` exists in the grid. The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

## Example
```
Input: board = 
  [['A', 'B', 'C', 'E'],
   ['S', 'F', 'C', 'S'],
   ['A', 'D', 'E', 'E']]
word = "ABCCED"
Output: true
```

## Key Idea
We will solve this problem via DFS. For each cell, we can move up, down, left, or right (neighbors). Let `seen` be a set of cells that maps the visited indicies on the current DFS path. Let `m` be a map that maps the character of given `word` to its occurrence. We will stop search if the current character on the path does not exist in `word` (or value is 0) or we reach to the maximum length. On each iteration, we will backtrack our solution for the set and map. And we will run DFS for each cell.

Notice we can modify the cell on board to a value of `#`, then it will represent a visited cell. Then we can backtrack and modify this cell back. In addition, we can pass in a level and compare board[i][j] to word[level], if match then continue otherwise stop.

## Complexity Analysis
- Since the time complexity of DFS is O(|V| + |E|) where in this case, |V| = size of (word) and |E| is the 3 ^ size of (word). Although 4 directions, but we will not traverse the direction we came before thus only 3 directions to explore. We will run DFS for each cell, thus the runtime complexity is O(m * n * 3 ^ size of (word))
- The space complexity will be O(len(word)) (the recursion stack size)

## Solution
- [C++](solution.cpp)