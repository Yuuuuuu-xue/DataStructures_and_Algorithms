## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1481

## Problem
Given an array of integers `arr` and an integer `k`. Find the least number of unique integers after removing exactly `k` elements.

## Example
```
Input: arr = [5, 5, 4], k = 1
Output: 1
Explanation: Remove the single 4, only 5 is left
```

## Key Idea
Simply let `m` be a map that maps the number to its frequency. Then build another map that maps frequency to number of elements with this frequency. Then the greedy strategy is to remove `k` elements with smallest frequency.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution:
- [C++](./solution.cpp)