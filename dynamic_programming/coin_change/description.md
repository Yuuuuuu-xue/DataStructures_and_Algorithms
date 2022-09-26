## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## Problem
You are given an integer array ```coins``` represeting coins of different denominations and an integer ```amount``` representing a total amount of money. 

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return ```-1```.

You may assume that you have an infinite number of each kind of coin.

## Example
```
Input: coins = [1, 2, 5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1

Input: coins = [2], amount = 3
Output: -1

Input: coins = [1], amount = 0
Output: 0
```

## Key Idea
We will use dynamic programming to solve this problem. Let's say we are looking for the minimum number of coins to make to n with available coins c1, ..., ck. Now we know that the minimum number of coins to make to n is same as 1 + the minimum number of coin of {n - c1, ..., n - ck}. Thus, let dp[i] be the minimum number of coins to make to the value i. And dp[amount] is the final solution that we are looking for.

## Time Complexity and Space Complexity
- The time complexity is O(n * amount) where n is the length of integer array
- The space complexity is O(amount)

## Solution
- [Java Solution](coin_change.java)
- [Python Solution](coin_change.py)
- [C++](solution.cpp)
