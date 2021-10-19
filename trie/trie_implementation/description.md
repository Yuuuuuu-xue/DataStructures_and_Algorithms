## Trie
Click [here](../notes.md) to go back to the notes page.

## Problem
A **trie** or a **prefix tree** is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spellchecker.

## Operations
- **insert(word)**: insert the word into Trie
- **search(word)**: return True iff we have stored word in the Trie
- **startsWith(prefix)**: return True iff we have this prefix in the Trie

## Key Idea
We will use a defaultdict(Trie) to represent the children in the current item and we will store the root item.

To implement the insert operation, all we need to do is to travel down to the last character of the given word and set isWord to True. So we know that at this end point, we have a word. The runtime complexity is $\mathcal{O}(|word|)$

To implement the search operation, all we need to do is to travel down for each characters in the given word. If at any point, we haven't seen this character before, then we can return False immediately. Otherwise, at the last character, we check if isWord is True or not. The runtime complexity is $\mathcal{O}(|word|)$

To implement the startsWith operation, all we need to do is to travel down for each characters in the given prefix. If at any point, we haven't seen this character before, then we can return False immediately. Otherwise, at the last character, we simply return True since we have store this prefix before. The runtime complexity is $\mathcal{O}(|prefix|)$

## Solution
- [Python Solution](trie_implementation.py)