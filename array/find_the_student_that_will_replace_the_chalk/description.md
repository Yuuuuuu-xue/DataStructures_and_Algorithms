# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1894

## Problem
There are `n` students in a class numbered from `0` to `n - 1`. The teacher will give each student a problem starting with the student number `0`, then the student number `1`, and so on until the teacher reaches the student number `n - 1`. After that, the teacher will restart the process, starting with the student number `0` again.

You are given a 0-indexed integer array `chalk` and an integer `k`. There are initially `k` pieces of chalk. When the student number `i` is given a problem to solve, they will use `chalk[i]` pieces of chalk to solve that problem. However, if the current number of chalk pieces is strictly less than `chalk[i]`, then the student number `i` will be asked to replace the chalk.

Return the index of the student that will replace the chalk pieces.

## Example
```
Input: chalk = [5, 1, 5], k = 22
Output: 0
Explanation: 
- Student number 0 uses 5 chalk, so k = 17
- Student number 1 uses 1 chalk, so k = 16
- Student number 2 uses 5 chalk, so k = 11
- Student number 0 uses 5 chalk, so k = 6
- Student number 1 uses 1 chalk, so k = 5
- Student number 2 uses 5 chalk, so k = 0
- Student 0 does not have enough chalk, so they will have to replace it
```

## Key Idea
We will sum up all the chalk and then use mod it by `k` to get the last round. Then simply loop over and find the studnet.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)