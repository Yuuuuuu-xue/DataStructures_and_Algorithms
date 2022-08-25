## Topological Sort
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 269 (Premium)

## Description
There is a new alien language that uses the English alphabet. However, the order among the letter is unknown to you.

You are given a list of strings `words` from the alien language's dictionary, where the strings in `words` are sorted lexicographically by the rules of this new language.

Return a string of the unique letters in the new alien language sorted in lexicographically increasing order by the new lanaguage's rules. If there is no solution, return `""`. If there are multiple solutions, return any of them.

A string `s` is lexicographically smaller than a string `t` if at the first letter where they differ, the letter in `s` comes before the letter in `t` in the alien language. If the first `min(s.length, t.length)` letters are the same, then `s` is smaller if and only if `s.length < t.length`.

## Example:
```
Input: words = ["wrt", "wrf", "er", "ett", "rftt"]
Output: "wertf"

Input: words = ["z", "x"]
Output: "zx"

Input: words = ["z", "x", "z"]
Output: ""
```

## Key Idea
We will iterate over the words by pairs. For each pair of words `(word1, word2)`, let `c1` and `c2` be the first character that `word1` is different than `word2`. Then, we know in the alphabet, `c1` must occur before `c2` thus we have an edge from `c1` to `c2`. If no such character exists and `word1.length >= word2.length`, then we can immediately return empty string because in such case, it is not sorted lexicographically in the increasing order.

After we build the graph, simply apply the topological sort and it will be our final solution.

Note if character is same, we will still have an edge pointing to itself and we will add a special case that when we iterating though its neighbors, we vertify that its neighbor is not same than the current character.

## Complexity Analysis
- Runtime Complexity: O(n * c + m) where c is the maximum length of any word in words 
- Space Complexity: O(n + m) where m is the number of edges

## Solution
- [C++](solution.cpp)