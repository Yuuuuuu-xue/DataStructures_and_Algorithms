## LeetCode Problem
Medium 846

## Description
Alice has some number of cards and she wants to rearrange the cards into groups so that each group is of size `groupSize`, and consists of `groupSize` consecutive cards.

Given an integer array `hand` where `hand[i]` is the value written on the `ith` card and an integer `groupSize`, return `true` if she can rearrange the cards, or `false` otherwise.

## Example
```
Input: hand = [1, 2, 3, 6, 2, 3, 4, 7, 8], groupSize = 3
Output: true
Explanation: Alice's hand can be arranged as [1, 2, 3], [2, 3, 4], and [6, 7, 8]

Input: hand = [1, 2, 3, 4, 5], groupSize = 4
Output: false
```

## Basic Idea
First of all, if `hand.size() % groupSize != 0`, then we can return `false` immediately. Then we push `(num, freq)` into priority queue. Each time, we pop `groupSize` of elements from the queue, if the values are not consecutive, then we can return `false` immediately. Then, we can update `freq`, push back to priority queue if it is greater than 0.

## Complexity Analysis
- Runtime Complexty: O(n lg n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)