# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2073

## Problem
There are `n` people in a line queuing to buy tickets, where the `0th` person is at the front of the line and the `(n - 1)th` person is at the back of the line.

You are given a 0-indexed integer array `tickets` of length `n` where the number of tickets that the `ith` person would like to buy is `tickets[i]`.

Each person takes exactly 1 second to buy a ticket. A person can only buy 1 ticket at a time and has to go back to the end of the line (which happens instantaneously) in order to buy more tickets. If a person does not have any tickets left to buy, the person will leave the line.

Return the time taken for the person at position `k` (0-indexed) to finish buying tickets.

## Example
```
Input: tickets = [2, 3, 2], k = 2
Output: 6
Explanation:
- For the first pass, everyone buys the tickets and lines becoems [1, 2, 1]
- For the second pass, everyone buys the tickets and lines becomes [0, 1, 0]
- Since last person bought 2 tickets and it took 3 + 3 = 6 seconds

Input: tickets = [5, 1, 1, 1], k = 0
Output: 8
```

## Key Idea
Note, for any person before or equal to `k`, then they can buy at most `tickets[k]` tickets. For any person after `k`, then they can buy at most `tickets[k] - 1` tickets. This is because when `k` person buys the last ticket, we don't care about the rest of person so they can buy at most `tickets[k] - 1` tickets.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)