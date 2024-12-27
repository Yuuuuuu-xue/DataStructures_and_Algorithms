# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1014

## Problem
You are given an integer array `values` where `values[i]` represents the value of the `ith` sightseeing spot. Two sightseeing spots `i` and `j` have a distance `j - i` between them.

The score of a pair `i < j` of sightseeing spots is `values[i] + values[j] + i - j`: the sum of the values of the sightseeing spots, minus the distance between them.

Return the maximum score of a pair of sightseeing spots.
  
## Example:
```
Input: values = [8, 1, 5, 2, 6]
Output: 11
Explanation: i = 0, j = 2, values[i] + values[j] + i - j = 8 + 5 + 0 - 2 = 11
```

## Key Idea
Note the score can be break into two parts (values[i] + i) and (values[j] - j).

Then we can simply build a suffix array that compute the maximum possible value `values[j] - j` for `j > i`.

Then we can loop over each element at index `i` and use suffix to compute the maximum possible value to include item at index `i`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
