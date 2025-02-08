## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3160

## Problem
You are givne an integer `limit` and a 2D array `queries` of size `n x 2`.

There are `limit + 1` balls with distinct labels in the range `[0, limit]`. Initially all balls are uncolored. For every query in `queries` that is of the form `[x, y]`, you mark ball `x` with the color `y`. After each uery, you need to find the number of distinct colors among the balls.

Return an array `result` of length `n`, where `result[i]` denotes the number of distinct colors after `ith` uery.

Note that when answering a query, lack of a color will not be considered as a color.

## Example
```
Input: limit = 4, queries = [[1, 4], [2, 5], [1, 3], [3, 4]]
Output: [1, 2, 2, 3]
Explanation:
- After query 0, ball 1 has color 4, thus 1
- After query 1, ball 1 has color 4 and ball 2 has color 5, thus 2
- After query 2, ball 1 has color 3 and ball 2 has color 5, thus 2
- After query 3, ball 1 has color 3 and ball 2 has color 5, and ball 3 has color 4, thus 3
```

## Key Idea
We can simply use a map that maps the ball to its color and color to a number to represent the number of balls.

Then number of distinct color equals to the number of entires in the color map that has value > 0.

## Runtime Complexity
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
