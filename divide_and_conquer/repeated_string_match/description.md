## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## Problem
Given two strings `a` and `b`, return the minimum number of times you should repeat string `a` so that string `b` is a substring of it. If it is impossible for `b` to be a substring of `a` after repeating it, return `-1`.

Notice: string `"abc"` repeated 0 times is `""`, repeated 1 time is `"abc"` and repeated 2 times is `"abcabc"`.

## Examples:
```
Input: a = "abcd", b = "cdabcdab"
Output: 3
Explanation: We return 3 becauses by repeating a thre times "abcdabcdabcd", b is a substring of it.
```

## Key Idea
If b is empty string, we can return 0 immediately.

To check if a string is a substring of another string, the minimum time it takes is O(n).

A simple solution is to keep repeating until we find the substring. However, the question comes: when can we stop?

Note, if `len(a) >= len(b)`, then we can repeat a two times and if `b` is not a substring of `a`, then we can return `false` otherwise `true`.

This is because `2*a` contains all the possible rotation of `a` and if `b` not in this substring, then no matter how many times we repeat, `b` is not a substring of `a`.

If we try all the possible pairs, it could take `O(n^2)` time and reach TLE.

However, we know the max number of times we need to repeat which is `ceil(len(b) / len(a))` * 2. This makes the `len(a) >= len(b)` and multiply it by 2.

The minimum number of times we need to repeat is `ceil(len(b) / len(a))`.

Thus, we can simply use a binary search to solve this problem.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)