## Trie
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1233

## Problem
Given a list of folders `folder`, return the folders after removing all sub-folders in those folders. You may return the answer in any order.

If a `folder[i]` is located within another `folder[j]`, it is called a sub-folder of it. A sub-folder of `folder[j]` must start with `folder[j]`, followed by a `"/"`. For example, `"/a/b"` is a sub-folder of `"/a"` but `"/b"` is not a sub-folder of `"/a/b/c"`.

The format of a path is one or more concatenated strings of the form: `'/'` followed by one or more lowercase English letters.

- For example, `"/leetcode"` and `"/leetcode/problems"` are valid paths while an empty string and `"/"` are not.

## Example
```
Input: folder = ["/a", "/a/b", "/c/d", "/c/d/e", "/c/f"]
Output: ["/a", "/c/d", "/c/f"]
Explanation: folders "/a/b" is a subfolder of "/a" and "/c/d/e" is inside of folder "/c/d" in our filesystem.
```

## Key Idea
It is not necessary exactly used trie but use a similar idea. We can use a map to build the folder. When we traverse in the dictionary and we find a node in middle, we can drop all its children as all its children are its subfolders. At the end, all child leaves are the valid solution.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)