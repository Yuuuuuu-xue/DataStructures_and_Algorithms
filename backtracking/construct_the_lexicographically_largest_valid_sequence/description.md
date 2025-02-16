## Backtracking
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1718

## Problem
Given an integer `n`, find a sequence that satisfies all of the following:
- The integer `1` occurs once in the sequence
- Each integer between `2` and `n` occurs twice in the sequence
- For every integer `i` between `2` and `n`, the distance between the two occurrences of `i` is exactly `i`

The distance between two numbers on the sequence `a[i]` and `a[j]`, is the absolute difference of their indices `|j - i|`.

Return the lexicographically largest sequence. It is guaranteed that under the given constraints, there is always a solution.

## Example:
```
Input: n = 3
Output: [3, 1, 2, 3, 2]
Explanation: [2, 3, 2, 1, 3] is also a valid sequence, but [3, 1, 2, 3, 2] is the lexicographically largest valid sequence
```

## Key Idea
We will try to solve this problem using backtracking.

By using backtracking, we will try to place the largest element to the smallest indices as possible. If eventually we form a valid sequence, we stop the recursion. Otherwise we keep trying until we reach to the first solution (which is the lexicogrpahically largest sequence).

## Complexity Analysis
- Runtime Complexity:
    - The max depth of the recursion will be O(n)
    - At each step, we can try to use `n` integers and thus `n` recursive call
    - Thus, O(n^n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)