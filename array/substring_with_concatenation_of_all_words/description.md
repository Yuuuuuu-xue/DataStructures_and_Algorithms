# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 30

## Problem
You are given a string `s` and an array of strings `words` of the same length. Return all starting indices of substring(s) in `s` that is concatenation of each word in `words` exactly once, in any order, and without any internvening characters.

You can return the answer in any order.

## Example
```
Input: s = "barfoothefoobarman", words = ["foo", "bar"]
Output: [0, 9]
Explanation: substrings starting at index 0 and 9 are "barfoo" and "foobar" respectively. The output order does not matter, returning [9, 0] is fine too.

Input: s = "wordgoodgoodgoodbestword", words = ["word", "good", "best", "word"]
Output: []

Input: s = "barfoofoobarthefoobarman", words = ["bar", "foo", "the"]
Output: [6, 9, 12]
```

## Key Idea
Since any combination of words and words may have duplicate values, then this gives us a hint to use a hashmap that maps the word into its occurrence. Notice that we can assume `words` have all the same length of word. Then we can simply try each index and see if starting from this index, we can have a list of combinations of the words. Since all the words have the same length, we can simply traverse though the indicies with the same length to see if those words match in the hashmap or not.

## Solution
- [C++](./solution.cpp)