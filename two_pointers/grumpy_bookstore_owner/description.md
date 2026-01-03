# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium

## Problem
There is a bookstore owner that has a store open for `n` minutes. You are given an integer array `customers` of the length `n` where `customers[i]` is the number of the customers that enter the store at the start of the `ith` minute and all those customers leave after the end of that minute.

During certain minutes, the bookstore owner is grumpy. You are given a binary array gumpy where `grumpy[i]` is `1` if the bookstore owner is grumpy during the `ith` minute, and is `0` otherwise.

When the bookstore owner is grumpt, the customers entering during that minute are not satisfied. Otherwise, they are satisfied.

The bookstore owner knows a secret tecnique to remain not grumpy for `minutes` consecutive minutes, but this technique can only be used once.

Return the maximum number of customers that can be satisfied throughout the day.

## Example:
```
Input: customers = [1, 0, 1, 2, 1, 1, 7, 5], grumpy = [0, 1, 0, 1, 0, 1, 0, 1], minutes = 3
```

## Key Idea
A simply sliding window with size `minutes` for updating the value. We will first calculate the value based on `grumpy` and does not use `minutes`. Then for index `i`, we start window and `+ grumpy[i + minutes - 1]` if its value is 1 and add the value to window and `- grumpt[i - 1]` if its value is 1.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)