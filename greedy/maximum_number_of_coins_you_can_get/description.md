## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1561

## Problem
There are `3n` piles of coins of varying size, you and your friends will take piles of coins as follows:
- In each step, you will choose any 3 piles of coins (not necessarily consecutive)
- Of your choice, Alice will pick the pile with the maximum number of coins
- You will pick the next pile with the maximum number of coins
- Your friend Bob will the last pile
- Repeat until there are no more piles of coins
Given an array of integers `piles` where `piles[i]` is the number of coins in the `ith` pile.

Return the maximum number of coins that you can have.

## Example:
```
Input: piles = [2, 4, 1, 2, 7, 8]
Output: 9
Explanation:
- Choose triplet (2, 7, 8), Alice pick the pile with 8 coins, you pick the pile with 7 coins, and Bob pick the last one
- Choose triplet (1, 2, 4), Alice pick the pile with 4 coins, you pick the pile with 2 coins, and Bob pick the last one
```

## Key Idea
At each round, Alice pick the maximum, you pick the second maximum, and Bob pick the minimum. Repeat the process.

## Complexity Analysis
- Runtime Complexity: O(n lg n) since we need to sort
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
