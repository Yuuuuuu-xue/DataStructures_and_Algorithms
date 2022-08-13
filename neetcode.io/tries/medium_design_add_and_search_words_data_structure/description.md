## LeetCode Problem
Medium 211

## Description
Design a data structure that supports adding new words and finding if a string matches any previously added string. Implement the `WordDictionary` class:
- `WordDictionary()` initializes the object
- `void addWord(word)` adds `word` to the data structure, it can be matched later
- `bool search(word)` returns `true` if there is any string in the data structure that matches `word` or `false` otherwise

## Example
```
Input:
["WordDictionary", "addWord", "addWord", "addWord", "search", "search", "search", "search"]
[[], ["bad"], ["dad"], ["mad"], ["pad"], ["bad"], [".ad"], ["b.."]]

Output:
[null, null, null, null, false, true, true, true]

Explanation:
WordDictionary wordDictionary = new WordDictionary();
wordDictionary.addWord("bad");
wordDictionary.addWord("dad");
wordDictionary.addWord("mad");
wordDictionary.search("pad"); // false
wordDictionary.search("bad"); // true
wordDictionary.search(".ad"); // true
wordDictionary.search("b.."); // true
```

## Basic Idea
Since we want to insert words and search for some patterns, it provides a hint to use `Trie` to solve this problem. For `addWord`, we can simply insert the word into the trie. Then for the `search`, we will use DFS to solve this problem. If a character is not `'.'`, then we traverse the Trie normally otherwise, we will try each of its children.

## Solution
- [C++](./solution.cpp)