## LeetCode Problem
Easy 121

## Description
You are given an array `prices` where `prices[i]` is the price of a given stock on the `ith` day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot acheive any profit, return `0`.

## Example
```
Input: prices = [7, 1, 5, 3, 6, 4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6 - 1 = 5.

Input: prices = [7, 6, 4, 3, 1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
```

## Basic Idea
Let i represents the day to buy the stock with initial value of 0. Then loop over j from 1 to n - 1. Then for the cases:
- prices[i] > prices[j], then assign i = j.
- prices[i] < prices[j], then update the profit since we can sell it on day j
- prices[i] = prices[j], do nothing

## Solution
- [C++](./solution.cpp)