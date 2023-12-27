## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
Medium 1578

## Problem
Alice has `n` balloons arranged on a rope. You are given a 0-indexed string `colors` where `colors[i]` is the color of the `ith` balloon.

Alice wants the rope to be colorful. She does not want two consecutive balloons to be of the same color, so she asks Bob for help. Bob can remove some balloons from the rope to make it colorful. You are given a 0-indexed integer array `neededTime` where `neededTime[i]` is the time (in seconds) that Bob needs to remove the `ith` balloon from the rope.

Return the minimum time Bob needs to make the rope colorful.

## Example
```
Input: colors = "abaac", neededTime = [1, 2, 3, 4, 5]
Output: 3
Explanation: need to take off one of the balloon `a` with min cost 3.
```

## Key Idea
The greedy strategy: if two balloon are consecutive, then we can take off the one with minimum cost and left with maximum cost on the rope.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution:
- [C++](solution.cpp)
