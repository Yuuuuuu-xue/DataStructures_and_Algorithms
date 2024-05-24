## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2285

## Problem
You are given an integer `n` denoting the number of cities in a country. The cities are numbered from `0` to `n - 1`.

You are also given a 2D integer array `roads` where `roads[i] = [a_i, b_i]` denotes that there exists a bidirectional road connecting cities `a_i` and `b_i`.

You need to assign each city with an integer value from `1` to `n`, where each value can only be used once. The importance of a road is then defined as the sum of the values of the two cities it connects.

Return the maximum total importance of all roads possible after asigning the values optimally.

## Example
```
Input: n = 5, roads = [[0, 1], [1, 2], [2, 3], [0, 2], [1, 3], [2, 4]]
Output: 43
Explanation: We will assign the nodes to [2, 4, 5, 3, 1]
- The road (0, 1) has an importance of 2 + 4 = 6
- The road (1, 2) has an importance of 4 + 5 = 9
- The road (2, 3) has an inportance of 5 + 3 = 8
- The road (0, 2) has an importance of 2 + 5 = 7
- The road (1, 3) has an importnace of 4 + 3 = 7
- The road (2, 4) has an importance of 5 + 1 = 6
The total importance of all roads is 6 + 9 + 8 + 7 + 7 + 6 = 43
```

## Key Idea
Simply find the degree of each node and assign highest value to the highest degree. Then, we simply calculate the score.

## Complexity Analysis
- Runtime Complexity: O(n + m + n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
