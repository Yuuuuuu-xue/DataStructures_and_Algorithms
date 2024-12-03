# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2109

## Problem
You are given a 0-indexed string `s` and a 0-indexed integer array `spaces` that describes the indices in the original string where spaces will be added. Each space should be inserted before the character at the given index.
- For example, given `s = "EnjoyYourCoffee"` and `spaces = [5, 9]`, we place spaces before `'Y'` and `'C'`, which are at indices `5` and `9` respectively. Thus, we obtain `"Enjoy Your Coffee"`.

Return the modified string after the spaces have been added.

## Example:
```
Input: s = "LeetcodeHelpsMeLearn", spaces = [8, 13, 15]
Output: "Leetcode Helps Me Learn"
```

## Key Idea
Simply two pointers, one loop over s index and one loop over space index. If both indexes are the same, we add a space, otherwise add the character in s.

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(n + m)

## Solution
- [Python](./solution.py)
