## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2375

## Problem
You are given a 0-indexed string `pattern` of length `1 <= len <= 8` containing of characters `'I'` meaning increasing and `'D'` meaning decreasing.

A 0-indexed string `num` of length `n + 1` is created using the following conditions:
- `num` consists of the digits `1` to `9`, where each digit is used at most once
- If `pattern[i] == 'I'`, then `num[i] < num[i + 1]`.
- If `pattern[i] == 'D'`, then `num[i] > num[i + 1]`.
Return the lexicographically smallest possible string `num` that meets the conditions.

## Example:
```
Input: pattern = "IIIDIDDD"
Output: "123549876"
Explanation:
- At indices 0, 1, 2, and 4, we must have `num[i] < num[i + 1]`
- At indices 3, 5, 6, and 7, we must have `num[i] > num[i + 1]`
- Output string is the smallest.
```

## Key Idea
We can use greedy to solve this problem.

The greedy strategy is to let `curr` be the current unused smallest numeber. Then if we see `I`, we can simply push the `curr` into output string and increment it by one.

If we see `D`, then for all the consecutive `D`, we push `curr` and increment it until we see `I`, then we pop all the number from stack and push to otuput string.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
