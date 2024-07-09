# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1701

## Problem
There is a restaurant with a single chef. You are given an array `customers` where `customers[i] = [arrival_i, time_i]`:
- `arrival_i` is the arrival time of the `ith` customer. The arrival times are sorted in non-decreasing order.
- `time_i` is the time needed to prepare the order of the `ith` customer.

When a customer arrives, he gives the chef his order, and the chef starts preparing it once he is idle. The customer waits till the chef finishes preparing his order. The chef does not prepare food forr more than one customer at a time. The chef prepares food for customers in the order they were given in the input.

Return the average waiting time of all customers. Solutions within `10^-5` from the actual answer are considered accepted.

## Example
```
Input: customers = [[1, 2], [2, 5], [4, 3]]
Output: 5
Explanation:
1. The first customer arrives at time 1, the chef takes his order and starts preparing it immediately at time 1 and finishes at time 3, so the waiting time of the first customer is 3 - 1 = 2
2. The second customer arrives at time 2, the chef takes his order and starts preparing it at time 3, and finishes at 8, thus waiting time is 8 - 2 = 6
3. The third customer arrives at time 4, the checf takes his order and starts preparing it at time 8, and finishes at time 11, so waiting time of the third customer is 11 - 4 = 7
```

## Key Idea
Simply simulate the process and calculate the total waiting time to find out the average waiting time.

## Solution
- [Python](./solution.py)