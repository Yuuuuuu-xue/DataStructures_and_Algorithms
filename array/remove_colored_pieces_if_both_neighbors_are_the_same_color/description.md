# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Mediumn 2038

## Problem
There are `n` pieces arranged in a line, and each piece is colored either by `A` or by `B`. You are given a string `colors` of length `n` where `colors[i]` is the color of the `ith` piece.

Alice and Bob are playing a game where they take alternating turns removing pieces from the line. In this game, Alice moves first.
- Alice is only allowed to remove a piece colored `A` if both its neighbors are also colored `A`. She is not allowed to remove pieces that are colored `B`
- Alice is only allowed to remove a piece colored `B` if both its neighbors are also colored `B`. He is not allowed to remove pieces that are colored `A`
- Alice and Bob cannot remove pieces from the edge of the line
- If a player cannot make a move on their turn, that player loses and the other player wins.

Assuming Alice and Bob play optimally, return `true` if Alice wins or return `false` if Bob wins.

## Examples:
```
Input: colors = "AAABABB"
Output: true
Explanation:
A(A)ABABB -> AABABB
Alice moves first, she removed the secon since neighbors are both A.
Now it's Bob's turn. Bob cannot move. THhus Alice wins and return true.

Input: colors = "AA"
Output: false

Input: colors = "ABBBBBBBAAA"
Output: false
```

## Basic Idea
Note, if we have `AAAA`, then Alice can remove second A and then becomes `AAA` and can remove another one. 

Thus, let `numThreeConseA` be the number of three consecutive A (i.e. `colors[i] == 'A' && colors[i + 1] == 'A' && colors[i + 2] == 'A`) and `numThreeConseB`. Then Alice wins if `numThreeConseA > numThreeConseB`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
- [Rust](./solution.rs)