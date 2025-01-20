## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2661

## Problem
You are given a 0-indexed integer array `arr`, and an `m x n` integer matrix `mat`. `arr` and `mat` both contain all the integers in the range `[1, m * n]`.

Go through each index `i` in `arr` starting from index `0` and paint the cell in `mat` containing the integer `arr[i]`.

Return the smallest index `i` at which either a row or a column will be completely painted in `mat`.

## Example
```
Input: arr = [1, 3, 4, 2], mat = [[1, 4], [2, 3]]
Outut: 2
Explanation: After 3 moves (at index 2), the first row is painted.
```

## Key Idea
We can simply use a hashmap that maps the element to its matrix (row_i, col_j).

Then loop over the element and paint row and col. When the counter reaches to the its length, we return `i`.

## Complexity Analysis
- Runtime Complexity: O(m * n)
- Space Complexity: O(m * n)

## Solution
- [Python](./solution.py)
