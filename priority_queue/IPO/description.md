## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 502

## Problem
Suppose LeetCode will start its IPO soon. In order to sell a good price of its shares to Venture Capital, LeetCode would like to work on some projects to increase its capital before the IPO. Since it has limited resources, it can only finish at most `k` distinct projects before the IPO. Help LeetCode design the best way to maximize its total capital after finishing at most `k` distinct projects.

You are given `n` projects where the `ith` project has a pure profit `profits[i]` and a minimum capital of `capital[i]` is needed to start it.

Initially, you have `w` capital. When you finish a project, you will obtain its pure profit and the profit will be added to your total capital.

Pick a list of at most `k` distinct projects from given projects to maximize your final capital, and return the final maximized capital.

The answer is guaranteed to fit in a 32-bit signed integer.

## Example
```
Input: k = 2, w = 0, profits = [1, 2, 3], capital = [0, 1, 1]
Output: 4
Explanation:
- Initial start with capital 0, you can start project with project 0 with profit 1, total capital 1
- Start project with project 2, with profit 3, total capital 4.
```

## Key Idea
We can sort the capital from smallest to largest.

Then keep track the current capital and curr index `i`. For each project, we iterate over `i` up to last item until we reach to a project with not enough capital.

When we iterate over the project, we can store in a max heap to get the possible project with max profit.

## Complexity Analysis
- Runtime Complexity: O(n lg n + k * lg n)
- Space Complexity: O(n)
