## LeetCode Question
Medium 151

## Description
Given an input string `s`, reverse the order of the words. A word is defined as a sequence of non-space characters. The words in `s` will be separated by at least one space.

Note that `s` may ocntain leading or trilling spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

## Example
```
Input: s = "the sky is blue"
Output: "blue is sky the"

Input: "     hello   world   "
Output: "world hello"
```

## Key Idea
Let `o` be an output string. Then we will loop over each character in `s` from backward:
- If current character is space, then skip it
- If current character is not a space, then we expand the window to include all the non-space characters.
- Then we have two indicies indicating the start and end position of the window (which do not have spaces) and then we can insert this word into the output string `o`.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(n)

## Solution
- [C++](solution.cpp)