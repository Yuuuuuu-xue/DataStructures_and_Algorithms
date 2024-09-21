# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 386

## Problem
Given an integer `n`, return all the numbers in the range `[1, n]` sorted in lexicographical order. You must write an algorithm that runs in `O(n)` time and uses `O(1)` extra space.

## Example
```
Input: n = 13
Output: [1, 10, 11, 12, 13, 2, 3, 4, 5, 6, 7, 8, 9]
```

## Key Idea
We cannot generate all the strings and sort it. It requires `O(n lg n)` runtime. We can simply let `num = 1` and start push numbers to the output array. Then the next number will be `10`, `100`, `1000`, ..., until `num > n`. Then the next number will be `num + 1` until we reach to `num > n` or `num` ends with 9. Suppose current number is 29, then the next number will be 3 instead of 30. Thus, we can simply while loop and `num //= 10` until `num % 9 != 0 or num <= n`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1) no extra space except the output array

## Solution
- [Python](./solution.py)