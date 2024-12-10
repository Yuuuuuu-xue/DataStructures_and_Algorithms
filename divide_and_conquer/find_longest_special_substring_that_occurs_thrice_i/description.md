## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2981

## Problem
You are given a string `s` that consists of lowercase English letters.

A string is called special if it is made up of only a single character. For example, the string `"abc"` is not special, whereas the strings `"ddd"`, `"zz"`, and `"f"` are special.

Return the length of the longest special substring of `s` which occurs at least thrice, or `-1` if no special substring occurs at least trice.

A substring is a contiguous non-empty sequence of characters within a string.

## Example
```
Input: s = "aaaa"
Output: 2 
Explanation:
The longest special substring which occurs trice is "aa".
```

## Key Idea
Suppose we modify the question that given a number `x`, we want to know if there is possible to find special substring with length `x` that occurs at least thrice.

Then to solve this problem, we can simply iterate over the string and count the number of consecutive elements and count the number of such special substring. If > 3, we return true. We will use a map that maps the special elements to the count of that special element.

The possible solution of this problem is from `1` to `n` (inclusive), and we can use binary search to find this problem.

If no such solution exists, return `-1`.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
