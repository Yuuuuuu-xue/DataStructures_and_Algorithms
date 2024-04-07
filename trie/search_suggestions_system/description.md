## Trie
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1268

## Problem
You are given an array of strings `products` and a string `searchWord`.

Design a system that suggests at most three products names from `products` after each cahracter of `searchWord` is typed. Suggested products should have common prefix with `searchWord`. If there are more than three products with a common prefix return the three lexicographically minimums products.

Return a list of lists of the suggested products after each character of `searchWord` is typed.

## Example
```
Input: products = ["mobile", "mouse", "moneypot", "monitor", "mousepad"], searchWord = "mouse"
Output:[
  ["mobile","moneypot","monitor"],
  ["mobile","moneypot","monitor"],
  ["mouse","mousepad"],
  ["mouse","mousepad"],
  ["mouse","mousepad"]
]
```

## Key Idea
When searching a prefix, it provides a hint to use a `Trie` data structure. We can build a trie and then search for the `searchWord`.

Since we need to return in lexigraphically minimum products, we can simply sort the `products` first.

We will have trie node to have a list of search words and the list should have at most 3 items since we only care about the first three items.

## Solution
- [C++](./solution.cpp)