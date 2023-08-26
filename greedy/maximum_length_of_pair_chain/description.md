## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 646

## Problem
You are given an array of `n` pairs `pairs` where `pairs[i] = [left_i, right_i]` and `left_i < right_i`.

A pair `p2 = [c, d]` follows a pair `p1 = [a, b]` if `b < c`. A chain of pairs can be formed in this fashion.

Return the length longest chain which can be formed.

You do not need to use up all the given intervals. You can select pairs in any order.

## Example:
```
Input: pairs = [[1, 2], [2, 3], [3, 4]]
Output: 2
Explanation: The longest chain is [1, 2] -> [3, 4]

Input: pairs = [[1, 2], [7, 8], [4, 5]]
Output: 3
Explanation: THe longest chain is [1, 2] -> [4, 5] -> [7, 8]
```

## General Idea:
We will solve this problem via Greedy algorithm. The greedy strategy is to sort the input array by the second element, if same, then sort by the first element, from smallest to largest. Then we always choose the element if we can since it guarantees its the smallest chain `b` value that we can have.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
