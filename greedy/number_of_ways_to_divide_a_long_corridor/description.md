## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
Hard 2147

## Problem
Along a long library corridor, there is a line of seats and decorative plants. You are given a 0-indexed string `corridor` of length `n` consisting of letter `'S'` and `'P'` where each `'S'` represents a seat and each `'P'` represents a plant.

One room divider has already been installed to the left of index `0`, and another to the right of index `n - 1`. Additional room dividers can be installed. For each position between indices `i - 1` and `i` (`0 <= i <= n - 1`), at most one divider can be installed.

Divide the corridor into non-overlapping sections, where each section has exactly two seats with any number of plants. There may be multiple ways to perform the division. Two ways are different if there is a position with a room divider installed in  the first way but not in the second way.

Return the number of ways to divide the corridor. Since the answer may be very large, return it modulo `10*9 + 7`. If there is no way, return `0`.

## Example
```
Input: corridors = "SSPPSPS"
Output: 3
Explanation: There are 3 different ways to divide the corridor:
- First way: |SS|PPSPS|
- Second way: |SSP|PSPS|
- Third way: |SSPP|SPS|

Input: corridor = "PPSPSP"
Output: 1

INput: corridor = "S"
Output: 0
```

## Key Idea
Note, suppose number of `S` is `0` or is odd number, then we can return 0 directly.

Then suppose we have a case where `*SPPPPS*` where we want to insert a wall between two `S`, then note the number of walls = number of `P`'s + 1 = distance between two S's.

Thus, we need to find out the second P and third P distance, the fourth P and fifth P distance, and so on.

Then the product is the final solution we are looking for since it's a combination.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n) since we need an array to keep track the index of `P`

## Solution:
- [C++](solution.cpp)
