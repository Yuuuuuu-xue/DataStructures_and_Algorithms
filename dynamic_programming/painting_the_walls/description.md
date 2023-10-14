## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2742

## Problem
You are given two 0-indexed integer arrays, `cost` and `time`, of size `n` representing the costs and the time taken to paint `n` different walls respectively. There are two painters available:
- A paid painter that paints the `ith` wall in `time[i]` units of time and takes `cost[i]` units of money
- A free painter that paints the any wall in `1` unit of time at a cost of `0`. Buf the free painter can only be used if the paid painter is already occupied.

Return the minimum amount of money required to paint the `n` walls.

You can assume that `1 <= cost.length <= 500` and `cost.length = time.length` and `1 <= time[i] <= 500`.

## Example
```
Input: cost = [1, 2, 3, 2], time = [1, 2, 3, 2]
Output: 3
Explanation: The walls at index 0 and index 1 will be painted by the paid painter and it will take 3 units of time; meanwhile, the free painter will paint the walls at index 2 and 3, free of cost in 2 units of time. Thus, the total cost = 1 + 2 = 3.

It is also possible that paid painter to paint the wall at index 2 and it will take 3 units of time. In the manwhile, the free painter can print the rest of the wall.
```

## Key Idea
At any point, we can decide either we pain the wall with a paid painter or a free painter, then we reduce the problem size by 1 and thus it provides a hint to use the dynamic programming to solve this problem.

We can solve this problem using top down approach with memoriazation. Let's define a recursive function that takes in `i` and `j` and `dp` for memorization. We will pain the `i`th wall with `j` that represents the occupied time for the paid painter.

Then we will first try to use the paid painter and the cost = cost[i] + dp[i + 1, j + time[i]]

Then we can also use a free painter and then cost = dp[i + 1, j - 1].

Note we cannot check if `j > 0`, then we use a free painter because consider the following example:

```
Input: cost = [2, 3, 4, 2], time = [1, 1, 1, 1]
Output: 4
Explanation: Paid painter for the first and last index.
```

Thus, when `i == n` and if `j < 0`, then we return an invalid answer.

We find and return the minimum cost. When `i >= n`, exit the recursive call and return 0.

We can memoriaze the cost with `dp[i][j]`.

## Complexity Analysis
- Runtime Complexity: O(n * 500) where 500 represents the maximum possible occupied time
- Space Complexity: O(n * 500)

## Solution
- [C++](./solution.cpp)
