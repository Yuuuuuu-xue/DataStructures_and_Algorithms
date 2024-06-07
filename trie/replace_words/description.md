## Trie
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 648

## Problem
In English, we have a concept called root, which can be followed by some other word to form another long word - let's call this word `derivative`. For example, when the root `"help"` is followed by the word `"ful"`, we can form a new derivative `"heloful"`.

Given a dictionary consisting of many roots and a `sentence` consisting of words separated by spaces, replace all the derivatives in the sentence with the root forming it. If a derivative can be replaced by more than one root, replace it with the root that has the shortest length.

Return the `sentence` after the placement.

## Example
```
Input: dictionary = ["cat", "bat", "rat"], sentence = "the cattle was rattled by the battery"
Output: "the cat was rat by the bat"
```

## Key Idea
For each word `w` in the sentence, we basically want to find the shorest word in dictionary that is prefix of `w`.

To achieve it efficiently, we can simply build a trie and for each node, we set a boolean flag to indicate if a word ends with this character. Then, for each `w` in sentence, we can simply do a trie search.

## Complexity Analysis
- Runtime Complexity: O(n * k + m * z) where
  - n is the length of dictionary
  - k is the longest word in dictionary
  - m is the number of words in sentence
  - z is the longest word in sentence
- Space Complexity: O(n * k + m * z)

## Solution
- [Python](./solution.py)