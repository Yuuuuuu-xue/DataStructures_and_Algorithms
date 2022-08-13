## LeetCode Problem
Medium 208

## Description
A **trie** or **prefix tree** is a tree data structure used to efficienly store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spellchecker.

Implement the Trie class:
- `Trie()` initializes the trie object.
- `void insert(String word)` inserts the string `word` into the trie
- `boolean search(String word)` returns `true` if the string `word` is in the trie and `false` otherwise.
- `boolean startsWith(String prefix)` returns `true` if there is a previously inserted string `word` that has the prefix `prefix`, and `false` otherwise.

## Example
```
Input:
["Trie", "insert", "search", "search", "search", "startsWith", "insert", "search"]
[[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]

Output:
[null, null, true, false, true, null, true]

Explanation:
Trie trie = new Trie();
trie.insert("apple");
trie.search("apple"); // true
trie.search("app"); // false
trie.startsWith("app"); // true
trie.insert("app");
trie.search("app"); // true
```

## Basic Idea
We will use a tree data structure to build the trie. For given a string `apple`, we will build the tree where each character is a node and all characters after it will be its descendant. So the `apple` will produce a tree:
```
dummy
 |
 a
 |
 p
 |
 p
 |
 l
 |
 e
```
If we insert another word, so `aple`, then the tree will become:
```
dummy
 | 
 a
 |
 p
 | \
 p  l
 |  |
 l  e
 |
 e
```
Suppose we insert another word `app`, notice the tree will not change but how do we know if a word was inserted it before (i.e. not just a prefix of existing words). We can simply mark the word if it is true or false to see if any word ends with this character. Then we can easily find if a word was inserted before or not. Traverse the tree also checks if we have the prefix or not. Since it only contains 26 lowercase English character, each TrieNode will contain a boolean flag indicates if a word ends with this character and 26 entries for its children.

## Solution
- [C++](./solution.cpp)