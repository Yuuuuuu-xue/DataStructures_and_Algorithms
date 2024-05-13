## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 861

## Problem
You are given an `m x n` binary matrix `grid`.

A move consists of choosing any row or column and toggling each value in that row or column (i.e. changing all `0`'s to `1`'s, and all `1`'s to `0`'s).

Every row of the matrix is interpreted as a binary number and the score of the matrix is the sum of these numbers.

Return the highest possible score after making any number of moves (including zero moves).

## Examples:
```
Input: grid = 
[[0, 0, 1, 1],
 [1, 0, 1, 0],
 [1, 1, 0, 0]]
Output: 39
Explanation:
[[0, 0, 1, 1], 
 [1, 0, 1, 0],
 [1, 1, 0, 0]]
Flip the first zero, them matrix =
[[1, 1, 0, 0],
 [1, 0, 1, 0],
 [1, 1, 0, 0]]
Flip the third column, then matrix =
[[1, 1, 1, 0],
 [1, 0, 0, 0],
 [1, 1, 1, 0]]
Flip the fourth column, then matrix =
[[1, 1, 1, 1],
 [1, 0, 0, 1],
 [1, 1, 1, 1]]
Finally the sum is 0b1111 + 0b1001 + 0b1111 = 15 + 9 + 15 = 39
```

## Key Idea
The first observation is that if a row begins with 0, then we do a row flip.

This is because `0b1000` > `0b0111`. Thus, we will flip all elements in a row if it begins with 0.

Then we start traverse over each column starting from index `1`. For each column, we can flip the column if it has more `0`s than `1`s. To make it efficient, for each column, we coun the number of `1`s, and use `max(n - num, num)` and multiply it by `1 << x` where it represents the correct number in binary.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)