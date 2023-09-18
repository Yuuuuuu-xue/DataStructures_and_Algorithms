## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1337

## Description
You are given an `m x n` binary matrix `mat` of `1`'s (representing soliders) and `0`'s (representing civilians). The soliders are positioned in front of the civilians. That is, all the `1`'s will appear to the left of all the `0`'s in each row.

A row `i` is weaker than a row `j` if one of the following is true:
- The number of soliders in row `i` is less than the number of soliders in row `j`
- Both rows have the same number of soliders and `i < j`

Return the indices of the `k` weakest row in the matrix ordered from the weakest to strongest.

## Example
```
Input: mat =
[[1, 1, 0, 0, 0],
 [1, 1, 1, 1, 0],
 [1, 0, 0, 0, 0],
 [1, 1, 0, 0, 0],
 [1, 1, 1, 1, 1]], k = 3
Output: [2, 0, 3]
Explanation: The number of soliders in each row is:
- Row 0: 2
- Row 1: 4
- Row 2: 1
- Row 3: 2
- Row 4: 5
The row ordered from weakest to strongest are [2, 0, 3, 1, 4]

Input: mat =
[[1, 0, 0, 0],
 [1, 1, 1, 1],
 [1, 0, 0, 0], 
 [1, 0, 0, 0]], k = 2
Output: [0, 2]
```

## Basic Idea
We can first of all convert the matrix into a list of soliders that each row contains. Then simply push the pair `(numSoliders, i)` to a min heap. At the end, pop `k` items from the min heap and return the index.

Note, to compute the number of soliders for each row, we can either iterate over each element at each row or use a binary search to find it.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
- [Rust](./solution.rs)