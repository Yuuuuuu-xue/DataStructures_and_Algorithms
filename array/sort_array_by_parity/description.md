# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## Problem
Given an integer array ```nums```, move all the even integers at the beginning of the array followed by all the odd integers. Return any array that satisfies this condition.

## Example
```
Input: [3, 1, 2, 4]
Output: [2, 4, 3, 1]
Explanation: The outputs [4, 2, 3, 1], [2, 4, 1, 3], and [4, 2, 1, 3] would also be accepted
```

## Key Idea
We will use two pointers technique to solve this problem. An even pointer points to the first even number and an odd pointer points to the first odd number. If even > odd, then swap them otherwise increment even and odd by 1.

## Complexity
- The time complexity will be O(n) since a linear scan will be required.
- The space complexity will be O(1) since we modify it in place.

## Solution
- [Java Solution](sort_array_by_parity.java)