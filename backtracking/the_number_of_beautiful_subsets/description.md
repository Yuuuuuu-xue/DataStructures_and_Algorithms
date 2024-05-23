## Backtracking
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2597

## Problem
You are gvien an array `nums` of positive integers and a positive integer `k`.

A subset of `nums` is beautiful if it does not contain two integers with an absolute difference equal to `k`.

Return the number of non-empty beautiful subsets of the array `nums`

A subset of `nums` is an array that can be obtained by deleting some (possibly none) elements from `nums`. Two subsets are different if and only if the chosen indices to delete are different.

## Key Idea
Since we only want the number of beautiful subsets instead of a list of beautiful subsets, we can use recursion and use a list `curr` to represent the current subset and use backtrack to solve the problem.

Let `curr` be the current subset. For each number, we start the recursive call with `curr`. Then we iterate over each character, if we push a number to `curr` and `curr` is still happy subset, we push it and recursive call it and then later backtrack and pop it.

Instead of a list `curr`, we can use a map `curr` that maps the number to its occurrence in the map. Then for each number `num`, we can push a number to `curr` if there does not exists a number `x` such that `|x - num| = k`. We can simply check if `num - k` or `num + k` exists in `curr` and has an occurence > `0`.

## Complexity Analysis
- Runtime Complexity: O(n^n) since each recursive call takes `O(n)` and max depth of `O(n)`. But that's okay since `1 <= nums.length <= 20`
- Space Complexity: O(n^n)

## Solution
- [Python](./solution.py)