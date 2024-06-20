## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1552

## Problem
In the universe Earth C-137, Risk discovered a special form of magnetic force between two balls if they are put in his new invented basket. Rick has `n` empty baskets, the `ith` basket is at `position[i]`, Morty has `m` balls and needs to distribute the balls into the baskets such that the minimum magnetic force between any two balls is maximum.

Rick stated that magnetic force between two different balls at position `x` and `y` is `|x - y|`. 

Given the integer array `position` and integer `m`. Return the required force.

## Example
```
Input: position = [1, 2, 3, 4, 7], m = 3 
Output: 3 
Explanation: Put ball at position 1, 4, and 7. Then the minimum magnetic force is 3 which is the maximum value we can get.
```

## Key Idea
If we simplify the problem where it takes in `position`, `m`, and `d` where we want to know if it is possible to put ball such that the magnetic force is at least `d`.

To solve this problem, we can sort the `position` array and then loop over and calculate the number of balls we can put such that each ball magnetic force is at least `d`.

Then, the minimum possible solution is `1` and maximum possible solution is `max - min`. Thus, we can use binary search to solve this problem.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)