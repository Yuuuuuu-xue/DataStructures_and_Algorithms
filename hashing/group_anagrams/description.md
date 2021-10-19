## Hashing
Click [here](../notes.md) to go back to the notes page.

## Question
Given an array of strings ***strs***, group the **anagrams** together. You can return the answer in any order.

An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

## Example
```
Input: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
Output: [["bat"], ["nat", "tan"], ["ate", "eat", "tea"]]
```

## Key Idea
We can group those words by simply sort them as the key. 

## Solution
- [Python Solution](group_anagrams.py)