## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
You are given an `m x n` binary matrix `matrix`.

You can choose any number of columns in the matrix and flip every cell in that column (i.e. Change the value of the cell from `0` to `1` or vice versa).

Return the maximum number of rows that have all values equal after some number of flips.

## Example
```
Input: matrix = [[0, 1], [1, 1]]
Output: 1
Explanation: After flipping no values, 1 row has all values equal.
```

## Key Idea
Note, if we have row "0111", then if we flip the first column, it will have all ones.

All other rows with "0111" will be all ones and contribute to the final output.

Now, for row "1000", then if we flip the first column, we will have all zeroes and contribute to the final output.

Thus, we can simply use a hashmap that maps the string to its occurrence.

Then for each row, we construct the row "0111" and "1000" and update map.

## Complexity Analysis
- Runtime Complexity: O(m * n)
- Space Complexity: O(m * n)

## Solution
- [Python](./solution.py)
