## Trie
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2416

## Problem
You are given an array `words` of size `n` consisting of non-empty strings.

We define the score of a string `term` as the number of strings `words[i]` such that `term` is a prefix of `words[i]`.

For example, if `words = ["a", "ab", "abc", "cab"]`, then the score of "ab" is 2 since "ab" is a prefix of both "ab" and "abc"

Return an array `answer` of size `n` where `answer[i]` is the sum of scores of every non-empty prefix of `words[i]`.

## Example
```
Input: words = ["abc", "ab", "bc", "b"]
Output; [5, 4, 3, 2]
Explanation: The answer for "abc" has 3 prefixes "a", "ab" and "abc". There are 2 strigns with the prefix "a", 2 strings with prefix "ab", and 1 string with the rpefix "abc".
```

## Key Idea
When we talk about prefix, we should use Trie to solve the problem. We can simply loop over words and build the trie where trie node will consist two things:
- next node map
- int value represents number of prefixes start with this.

## Complexity Analysis
- Runtime Complexity: O(n * m) where m is the longest string in the array
- Space Complexity: O(n * m)

## Solution
- [Python](./solution.py)