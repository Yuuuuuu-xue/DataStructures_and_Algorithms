## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 781

## Problem
There is a forest with an unknown number of rabbits. We asked n rabbits "How many rabbits have the same color as you?" and collected the answers in an integer array `answers` where `answers[i]` is the answer of the `ith` rabbit.

Given the array `answers`, return the minimum number of rabbits that could be in the forest.

## Example
```
Input: answers = [1, 1, 2]
Output: 5
Explanation:
The two rabbits that answered "1" could both be the same color, say red.

The rabbit that answered "2" can't be red of the answers would be in consistent. Say the rabbit that answered "2" was blue. Thus 3 rabbits with color "blue".
```

## Key Idea
We can use a map to solve this problem.

When we visit a new number, if we see a number `k` for `n`th rabbit.

It means there is at least `k + 1` rabbits with the same color. We add `k + 1` to the output and store `k: k` map. Then, if we see another rabbit answer `k`, we decrement by 1. If we see the value again and not in the map, repeat the same process.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)