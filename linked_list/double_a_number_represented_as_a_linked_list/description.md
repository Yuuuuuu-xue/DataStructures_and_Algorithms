## Linked List
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2816

## Problem
You are given the `head` of a non-empty linked list representing a non-negative integer without leading zeroes.

Return the `head` of the linked list after doubling it.

## Example
```
Input: 1 -> 8 -> 9
Output: [3, 7, 8]

Input: 9 -> 9 -> 9
Output: 1 -> 9 -> 9 -> 8
```

## Key Idea
If we multiple the number from left to right (upper digits) first, then we will only update at most current digit and the prev digit on the left. This is because the previous digit is multiplied by 2 and thus its digit must be an even number. Then for current digit, since multiply it by 2, then we will carry 1 to the left and since left digit must be an even number, it won't be 9 and won't have a case where we need to carry another digit again.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python Solution](./solution.py)