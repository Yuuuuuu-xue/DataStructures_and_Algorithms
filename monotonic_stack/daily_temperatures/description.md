## Monotonic Stack
Click [here](../notes.md) to go back to the notes page.

## Problem
Given an array of integer `temperatures` represents the daily temperatures, return an array `answer` such that `answer[i]` is the number of days you have to wait after `ith` day to get a warmer temperature. If there is no future day for which this is possible, keep `answer[i] == 0` instead

## Example
```
Input: temperatures = [73, 74, 75, 71, 69, 72, 76, 73]
Output: [1, 1, 4, 2, 1, 1, 0, 0]
```

## Key Idea
Since we need to look for the number of days to get a warmer day, we are looking at back and hence we can start from the back and build the array.

Now, we want to keep track of future days to answer the question how many days we get a warmer date. Note, if day i has a lower temperature than day i + 1, then there is no need to track for day i + 1 because if it works for day i + 1, then it must also work for day i.

Hence, we can use a monotonic stack to keep track of tempatures in an increasing order (higher tempatrue).

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
