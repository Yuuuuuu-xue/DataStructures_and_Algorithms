## Trie
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 642 (Premium)

## Description
Design a search autocomplete system for a search engine. Users may input a sentence (at least one word and end with a specical character `#`).

You are given a string array `sentences` and an integer array `times` both of length `n` where `sentences[i]` is a previously typed sentence and `times[i]` is the corresponding number of times the sentencewas typed. For each input character except `#`, retur nthe top `3` historical hot sentences that have the same prefix as the part of the sentence already typed.

Here are the specific rules:
- The hot degree for a sentence is defined as the number of times a user typed the exactly same sentence before
- The returned top `3` hot sentences should be sorted by hot degree (The first is the hottest one). If serveral sentences have the same hot degree, use ASCII-code order (smaller one appears first).
- If less than `3` hot sentences exist, return as many as you can.
- When the input is a specical character, it means the sentence ends, and in this case, you need to return an empty list.

Implement the `AutocompleteSystem` class:
- `AutocompleteSystem(String[] sentences, int[] times)` initializes the object with the `sentences` and `times` array
- `List<String> input(char c)` indicates that the user typed the character `c`
  - Returns an empty array `[]` if `c == '#'` and stores the inputted sentence in the system
  - Returns the top `3` historical hot sentences that have the same prefix as the part of the sentences already typed. If there are fewer than `3` matches, return them all.

You can assume `c` is a lowercase English letter, a hash `#`, or space `' '`.

## Example
```
Input:
["AutocompleteSystem", "input", "input", "input", "input"]
[[["i love you", "island", "iroman", "i love leetcode"], [5, 3, 2, 2]], ["i"], [" "], ["a"], ["#"]]

Output:
[null, ["i love you", "island", "i love leetcode"], ["i love you", "i love leetcode"], [], []]

Explanation:
AutocompleteSystem obj = new AutocompleteSystem(["i love you", "island", "iroman", "i love leetcode"], [5, 3, 2, 2]);

// Return ["i love you", "island", "i love leetcode"]
obj.input("i");

// Return ["i love you", "i love leetcode"]
obj.input(" ");

// Return []
obj.input("a");

// Return []
obj.input("#");
```

## Basic Idea
Note, for the autocomplete system, we input each character and want to have a list of words that have the same prefix, then it provides a hint to use `Trie`. For each node, we can store a set of sentences that have this prefix. Let `m` be a map that maps the existing sentence to the number of times searched in the system. Then for inputting any character, we can store the curr pointer at `Trie`, and move down a node each time. Then add all the sentences with current prefix into a priority queue. For given two string `str1` and `str2`, this priority queue will first compare if `m[str1] > m[str2]`. If there are the same value, then compare `str1` and `str2` by their ASCII value. After building the priority queue, we will pop the top 3 items and they will be the hottest 3 sentences.

When we see a specical sentence, then we build a path in the trie and update `m`.

## Complexity Analysis
- Runtime Complexity: Since each time, we store previous TrieNode pointer thus we do not need to traverse from the root to current word. Thus the runtime depends on finding the top 3 sentences. We traverse all the sentences in the current trie node and push it into the priority queue, and pop top 3. Thus overall O(n lg n).
- Space Complexity: O(n) for the priority queue

## Solution
- [C++](./solution.cpp)