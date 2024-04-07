## Backtracking
Click [here](../notes.md) to go back to the notes page.

## Problem
Fina all valid combinations of ```k``` numbers that sum up to ```n``` such that the following conditions are true:
- Only numbers ```1``` through ```9``` are used.
- Each number is used **at most once**.
Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.

## Example:
```
Input: k = 3, n = 7
Output: [[1, 2, 4]]
Explanation: 1 + 2 + 4 = 7, there are no other valid combinations.

Input: k = 3, n = 9
Output: [[1, 2, 6], [1, 3, 5], [2, 3, 4]]
Explanation:
  1 + 2 + 6 = 9
  1 + 3 + 5 = 9
  2 + 3 + 4 = 9
  There are no other valid combinations.

Input: k = 4, n = 1
Output: []
```

## Key Idea
We will use backtracking technique to solve this problem. First of all, initialize a number to 1 and we will take a list lst and a number curr_k, and anther number curr_sum as input parameters. We add that number to the lst and increment curr_k by 1. If curr_k == k and sum of the lst is n, then we add it to our solution. If curr_k == k and that sum is not n, then we stop here. If curr_k < k and sum is < n, we do a recursive call and continue to search. If curr_k < k and sum > n, then we do not stop. At the end, try every number starting from 1 up to min(n, 9 - k).

## Solution
- [Java Solution](combination_sum_III.java)