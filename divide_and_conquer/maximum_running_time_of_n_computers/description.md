## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2141

## Problem
You have `n` computers. You are given the integer `n` and a 0-indexed integer array `batteries` where the `ith` battery can run a computer for `batteries[i]` minutes. You are interested in running all `n` computers simultaneously using the given batteries.

Initially, you can insert at most one battery into each computer. After that and at any integer time moment, you can remove a battery from a computer and insert another battery any number of times. The inserted battery can be a totally new battery or a battery from another computer. You may assume that the removing and inserting processes take no time.

Note that the batteries cannot be recharged.

Return the maximum number of minutes you can run all the `n` computers simultaneously.

## Example
```
Input: n = 2, batteries = [3, 3, 3]
Output: 4
Explanation:
- Initially, insert battery 0 into first computer and battery 1 into the second computer
- After two minutes, remove batter 1 from second computer and insert batter 2 instead. Batter 1 can still run for one minute.
- At the end of thrid minute, battery 0 is drained, and you need to remove it from the first computer and insert battery 1 instead.
- Bt the end of fourth minute, battery 1 is also drained, and the first computer is no longer running.
```

## Key Idea
Now, suppose we modify the problem, given n, batteries, and k. We want to know if we can run `n` computers simluataneously or not for `k` minutes.

We can solve this by iterate over the batteries. Note, for `k` minutes, a batter can be used for at most `k` minutes. Hence, we want to know how many minutes can those batteries be used to run computers and if they // k is greater than n or not.

Note the min solution of this question is 0 and max is sum of batteries // n.

Then we can solve this problem with a simple binary search.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [Python Solution](./solution.py)
