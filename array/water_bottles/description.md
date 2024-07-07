# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1518

## Problem
There are `numBottles` water bottles that are initially full of water. You can excahnge `numExchange` empty water bottles from the market with one full water bottle.

The operation of drinking a full water bottle turns it into an empty bottle.

Given the two integers `numBottles` and `numExcahnge`, return the maximum number of water bottles you can drink.

## Example
```
Input: numBottles = 9, numExchange = 3
Output: 13
Explanation: You can exchange 3 empty bottles to get 1 full water bottle. Number of water bottles you can drink: 9 + 3 + 1 = 13.
```

## Key Idea
Simply let a function that takes in number of bottles of water, number of empty bottle, and `numExchange`. Then simply drink all the water, use all the empty bottles and recursively call the function until we cannot exchange any water.

## Complexity Analysis
- Runtime Complexity: O(n ^ (1/3))
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)