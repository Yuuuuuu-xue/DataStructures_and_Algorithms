# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 860

## Problem
At a lemonade stand, each lemonade costs `$5`. Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a `$5`, `$10`, or `$20` bill. You must provide the correct change to each customer so that the net transaction is that the customer pays `$5`.

Note that you do not have any change in hand at first.

Given an integer array `bills` where `bills[i]` is the bill the `ith` customer pays, return `true` if you can provide every customer with the correct change, or `false` otherwise.

## Example
```
Input: bills = [5, 5, 5, 10, 20]
Output: true
```

## Key Idea
Simply keep two counters of 10 and 5. Note, we do not need to keep track of 20 because we won't return 20 to the customer.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)