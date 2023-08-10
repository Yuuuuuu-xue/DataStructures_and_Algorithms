## LeetCode Problem
Hard 127

## Description
a transformation sequence from word `beginWord` to word `endWord` using a dictionary `wordList` is a sequence of words `beginWord -> s1 -> s2 -> ... -> sk` such that
- Every adjacent pair of words differs by a single letter.
- Every `si` for `1 <= i <= k` is in `wordList`. Note that `beginWord` does not need to be in `wordList`.
- `sk == endWord`

Given two words, `beginWord` and `endWord`, and a dictionary `wordList`, return the number of words in the shortest transformation sequence from `beginWord` to `endWord`, or `0` if no such sequence exists.

## Example
```
Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log","cog"]
Output: 5
Explanation: One shortest transformation sequence is "hit" -> "hot" -> "dot" -> "dog" -> cog", which is 5 words long.

Input: beginWord = "hit", endWord = "cog", wordList = ["hot","dot","dog","lot","log"]
Output: 0
Explanation: The endWord "cog" is not in wordList, therefore there is no valid transformation sequence.
```

## Basic Idea
A simple base case is to check if `endWord` exists in the `wordList` or not, if not, we can return 0 immediately. Then for each `word`, we need to have efficient way to know what other words in `wordList` that we can convert `word` to other words with only one single character change. For each character in the word, we can replace it with `*`, then for this synax, we can map it to a list of words.

i.e. `m['hell*'] = ['hello', 'hella']` where `*` can be any character. Then we have an efficient way to know what other words we can traverse to with current word. Thus we can apply a BFS level by level.

## Complexity Analysis
- Runtime Complexity:
  - O(n * m) where m = length of longest word, we need to build a dictionary
  - O(n * m) for BFS
- Space Complexity: O(n * m)

## Solution
- [C++](./solution.cpp)