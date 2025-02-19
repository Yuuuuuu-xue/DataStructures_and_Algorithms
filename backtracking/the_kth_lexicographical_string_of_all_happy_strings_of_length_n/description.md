## Backtracking
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1415

## Problem
A happy string is a string that:
- Consists only of letters of the set `['a', 'b', 'c']`
- `s[i] != s[i + 1]` for all values of `i` from `1` to `s.length - 1` (string is 1-indexed)

For example, strings `"abc"`, `"ac"`, `"b"` and `"abcbabcbcb"` are all happy strings and strings `"aa"`, `"baa"`, and `"ababbc"` are not happy strings.

Given two integers `n` and `k`, consider a list of all happy strings of length `n` sorted in lexicographical order.

Return the kth string of this list or return an empty string if there are less than `k` happy strings of length `n`.

## Example
```
Input: n = 1, k = 3
Output: "c"

Input: n = 1, k = 4
Output: ""
```

## Key Idea
We can simply use backtracking to solve this problem. We start with `"a"`, then `"b"` and then `"c"`. Once we reach to the length `n`, the answer we get will be already sorted by lexicographical order.

Thus, simply use a backtracing, when reach to a solution, update the counter.

## Complexity Analysis
- Runtime Complexity:
  - Each recursive function takes at most 3 recursive calls
  - The maximum recursive depth is n
  - Thus runtime complexity is O(3^n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)