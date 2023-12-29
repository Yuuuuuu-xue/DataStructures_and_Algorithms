## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1335

## Problem
You want to schedule a list of jobs in `d` days. Jobs are dependent (i.e. to work on the `ith` job, you have to finish all the jobs `j` where `0 <= j < i`).

You have to finish at least one task every day. The difficulty of a job schedule is the sum of difficulties of each day of the `d` days. The difficulty of a day is the maximum difficulty of a job done on that day.

You are given an integer array `jobDifficulty` and an integer `d`. The difficulty of the `ith` job is `jobDifficulty[i]`.

Return the minimum difficulty of a job schedule. If you cannot find a schedule for the jobs return `-1`.
 
## Example
```
Input: jobDifficulty = [6, 5, 4, 3, 2, 1], d = 2
Output: 7
Explanation: Firest day, finsih first 5 jobs with total difficulty = 6. Second day you can finish the last job with total difficulty = 1. Thus total difficulty = 6 + 1 = 7.

Input: jobDifficulty = [9, 9, 9], d = 4
Output: -1
Explanation: Since you need to finish a job per day
```

## Key Idea
We will solve this problem via dynamic programming. Let `dp[i][j]` be the total difficulties to finish the first `i` jobs with `j` days.

Then simply loop over `j` from `0` to `d` and then `i` from `1` to `n`, both inclusive.

Then we try to include `i - 1`th job at the current day and start looping back of `k` from `i - 1` to `0` and try to include it in the current day and keep updating the `dp`.

## Complexity Analysis
- Runtime Complexity: O(n * n * d)
- Space Complexity: O(n * d)

## Solution
- [C++](./solution.cpp)