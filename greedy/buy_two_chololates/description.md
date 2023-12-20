## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 2706

## Problem
You are given an integer array `prices` representing the prices of various chololates in a store. You are also given a single integer `money`, which represents your initial amount of money.

You must buy exactly two chololates in such a way that you will have some non-negative leftover money. You would like to minimize the sum of the prices of the two cholocates you buy.

Return the amount of money you will have leftover after buying the two cholocates. If there is no way for you to buy two cholocates without ending up in debt, return `money`. Note that the leftover must be non-negative.
  
## Example:
```
Input: prices = [1, 2, 2], money = 3
Output: 0
Explanation: Purchase the chocolates priced at 1 and 2 units and it costs 1 + 2 = 3.

Input: prices = [3, 2, 3], money = 3
Output: 3
Explanation: Not enough money to buy two cholocates
```

## Key Idea
Greedy strategy: simply buy two cheapest cholocates. If not enough money, then return `money`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)
