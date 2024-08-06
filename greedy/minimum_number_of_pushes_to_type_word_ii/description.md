## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3016

## Problem
You are given a string `word` containing lowercase English letters.

Telephone keypads have keys mapped with distinct collections of lowercase English letters, which can be used to form words by pushing them. For example, the key `2` is mapped with `["a", "b", "c"]`, we need to push the key one time to type `"a"`, two times to type `"b"`, and three times to type `"c"`.

It is allowed to remap the keys numbered `2` to `9` to distinct collections of letters. The keys can be remapped to any amount of letters, but each letter must be mapped to exactly one key. You need to find the minimum number of times the keys will be pushed to type the string `word`.

Return the minimum number of pushes needed to type `word` after remapping the keys.

An example mapping of letters to keys on a telephone keypad is given below. Note that `1` , `*`, `#` and `0` do not map to any letters.

## Example:
```
Input: word = "abcde"
Output: 5
Explanation: The remapped keypad given:
2 -> "afg"
3 -> "bhi"
4 -> "cjk"
5 -> "dlm"
6 -> "eno"
7 -> "pqrs"
8 -> "tuv"
9 -> "wxyz"
```

## Key Idea
We can simply let the most frequent character to use less pushes. Thus, we will count over the given character and its frequency and then sort it. 

The greedy strategy is to let most frequent character to use less pushes. So we loop over the current most frequent character and let `i` be the index, then `i % 8` will be the cell in the phone and `i // 8 + 1` will be the number of pushes needed.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
