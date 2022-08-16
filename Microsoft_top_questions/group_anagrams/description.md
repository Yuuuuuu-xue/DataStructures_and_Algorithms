## LeetCode Question
Medium 49

## Description
Given an array of strings `strs`, group the anagrams together. You can return the answer in any order.

An anagram is a word or phrase formed by rearranging the ltters of a different word or phrase, typically using all the original letters exactly once.

## Example
```
Input: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
Output: [["bat"], ["nat", "tan"], ["ate", "eat", "tea"]]

Input: strs = [""]
Output: [[""]]
```

## Key Idea
It stands out we need some kind of a map that maps the anagram to a list of words that can be rearranged into this anagram. We can use a hashmap that maps each character to its occurrance so we know if two words have the same hashmap, then they must be in the same group. However, we cannot use a hashmap as a key inside another hashmap (could be possible but need to come up with an efficient hash function).

Since the given input string `s` contains only lower case letter, then we can simply serailized the word as a string, i.e. the letter followed by its occurrence in alphabetical order. We will not include any letter of occurrence of 0 to avoid the value `10` and `0`. For instance, the word "eea" will be serialized into `a1e2`. Then we can use it as the key to build the hashmap.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(n)

## Solution
- [C++](solution.cpp)