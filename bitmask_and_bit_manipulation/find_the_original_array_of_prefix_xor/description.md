## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2433

## Problem
You are given an integer array `pref` of size `n`. Find and return the array `arr` of size `n` that satisfies:
- `pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i]`
Note that `^` denotes the bitwise-xor operation.

Note it can be proven that the answer is unique.

## Example
```
Input: pref = [5, 2, 0, 3, 1]
Output: [5, 7, 2, 3, 2]
Explanation:
- prev[0] = 5
- prev[1] = 2 = 5 ^ 7
- prev[2] = 0 = 5 ^ 7 ^ 2
- prev[3] = 3 = 5 ^ 7 ^ 2 ^ 3
- prev[4] = 1 = 5 ^ 7 ^ 2 ^ 3 ^ 2
```

## Key Idea
The key idea is that `a ^ b = c` then `a ^ c = b`. Thus, the key idea is to let `curr` represents the XOR of all curr value in the output then XOR with `prev[i]`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1) if excluding the output array

## Solution
- [C++](solution.cpp)
