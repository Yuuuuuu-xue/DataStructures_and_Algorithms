## Backtracking
Click [here](../notes.md) to go back to the notes page.

## Problem
Given a collection of numbers, ```nums```, that might contain duplicates, return all possible unique permutations **in any order**.

## Example:
```
Input: nums = [1, 1, 2]
Output: 
  [[1, 1, 2],
   [1, 2, 1],
   [2, 1, 1]]

Input: nums = [1, 2, 3]
Output:
  [[1, 2, 3],
   [1, 3, 2],
   [2, 1, 3],
   [2, 3, 1],
   [3, 1, 2],
   [3, 2, 1]]
```

## Key Idea
We will use a hashset to guarantee the uniqueness constraint. Then we will use the backtracking technique to genearte all the permutations.

## Solution
- [Java Solution](permutations_II.java)