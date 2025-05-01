## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2071

## Problem
You have `n` tasks and `m` workers. Each task has a strength requirement stored in a 0-indexed integer array `tasks`, with the `ith` task requiring `tasks[i]` strenght to complete. The strength of each worker is stored in a 0-indexed integer array `workers`, with the `jth` worker having `workers[j]` strength. Each worker can only be assigned to a single task and must have a strength greater than or equal to the task's strength requirement (i.e. `workers[j] >= tasks[i]`).

Additionally, you have `pills` magical pills that will increase a worker's strength by `strength`. You can decide which workers receive the magical pills, however, you may only give each worker at most one magical pill.

Given the 0-indexed integer arrays `tasks` and `workers` and the integers `pills` and `strength`, return the maximum number of tasks that can be completed.

## Example
```
Input: tasks = [3, 2, 1], workers = [0, 3, 3], pills = 1, strength = 1
Output: 3
Explanation:
We can assign the magical pill and tasks as follows:
- Give the magical pill to worker 0
- Assign worker 0 to task 2 (0 + 1 >= 1)
- Assign worker 1 to task 1 (3 >= 2)
- Assign worker 2 to task 0 (3 >= 3)
```

## Key Idea
Note, this possible answer is bounded by the number of tasks. If we know we can handle `x` tasks, then we can handle `x - 1` to `0` tasks.

Thus, it provides a hint to use a binary search only if the sub-problem is easy enough to solve.

Given a number `k`, we want to know if we can handle at least `k` problems. To achieve it, we can sort the tasks and workers. Among those `k` weakest tasks, we will assign the weakest worker that can handle the current task. 

If no worker can take the task, we need to find the weakest worker that takes the pill and can handle the problem. If no such person or not enough pill, then we can return False.

We can sort the array beforehand and thus each subproblem takes at most O(m).

## Complexity Analysis
- Runtime Complexity: O(n lg n + m lg m)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)