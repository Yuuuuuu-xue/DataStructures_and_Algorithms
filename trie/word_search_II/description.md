## Trie
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 212

## Description
Given an `m x n` `board` of characters and a list of strings `words`, return all words on the board. Each word must be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once in a word.

## Example
```
Input: board = 
  [['o', 'a', 'a', 'n'],
   ['e', 't', 'a', 'e'],
   ['i', 'h', 'k', 'r'],
   ['i', 'f', 'l', 'v']]
words = ["oath", "pea", "rain"]

Output: ["eat", "oath"]
```

## Basic Idea
First of all, we can build a Trie containing the words. Then we will iterate though the board and try to build the substring by moving each character horizontally or vertically. Then check if the Trie contains the substring or not. If not, then stop search for the current substring. If so, we check if it contains the actual substring, if so, we add this substring to output array and remove the word from Trie to avoid duplicate solution. So for each cell, we will perform a DFS. We will use this cell, then check its neighbor, and then do not use this cell. Thus backtracking is also used.

## Solution
- [C++](./solution.cpp)