# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1535

## Problem
Given an integer array `arr` of distinct integers and an integer `k`.

A game will be played between the first two elements of the array (i.e. `arr[0]` and `arr[1]`). In each round of the game, we compare `arr[0]` with `arr[1]`, the larger integer wins and remains at position `0`, and the smaller integer moves to the end of the array. THe game ends when an integer wins `k` consecutive rounds.

Return the integer which will win the game.

It is guaranteed that there will be a winner of the game.

## Example
```
Input: arr = [2, 1, 3, 5, 4, 6, 7], k = 2
Output: 5
Explanation: since 5 > 3 and 5 > 4
```

## Key Idea
Note if we compare `i` and `j` and put the number that is lost in an array `lostNums`. Then we know if `j > i` implies that `j >` all the elements in the `lostNums`. Thus we will compare each number at most once. We can simply iterate over the array and use a variable to keep track the `currWinner` and `numWins`. If `numWins >= k`, we can return the `currWinner`. If we reach to the end of the array and `numWins < k`, we can return `currWin` directly because it will start compare numbers in `lostNums` again and we know that `currWinner >` all the numbers in the `lostNums`. 
```

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)