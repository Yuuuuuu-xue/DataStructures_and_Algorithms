# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1823

## Problem
There are `n` friends that are playing a game. The friends are sitting in a circle and are numbered from `1` to `n` in clockwise order. More formally, moving clockwise from the `ith` friend brings you to the `(i + 1)th` friend for `1 <= i < n`, and moving clockwise from the `nth` friend brings you to the `1st` friend.

The rules of the game are as follows:
1. Start at the `1st` friend
2. Count the next `k` friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
3. The last friend you counted leaves the circle and loses the game.
4. If there is still more than one friend in the circle, go back to step `2` starting from the friend immediately clockwise of the friend who just lost and repeat.
5. Else, the last friend in the circle wins the game.

Given the number of friends, `n`, and an integer `k`, return the winner of the game.

## Example
```
Input: n = 5, k = 2
Output: 3
Explanation:
1. Start at friend 1, count 2 friends 1 and 2. Thus, friend 2 leaves the circle. Left with [1, 3, 4, 5]
2. Start at friend 3, count 2 friends 3 and 4. Thus, friend 4 leaves the circle. Left with [1, 3, 5]
3. Start at friend 5, count 2 friends 5 and 1. Thus, friend 1 leaves the circle. Left with [3, 5]
4. Start at friend 3, count 2 friends 3 and 5. Thus, friend 5 leaves the circle. Left with 3.
```

## Key Idea
We can simply simuate the game by using a sorted set and remove the student for each round.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)