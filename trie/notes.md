DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Trie](#trie)
- [An example of a Trie](#an-example-of-a-trie)
- [Example:](#example)
    - [Trie Implementation](#trie-implementation)
    - [Word Search II](#word-search-ii)
    - [Design Add and Search Words Data Structure](#design-add-and-search-words-data-structure)
    - [Implement Trie](#implement-trie)
    - [Design Search Autocomplete System (Premium)](#design-search-autocomplete-system-premium)

## Trie
Trie is basically a tree (not a binary tree) that stores String.
- The maximum number of children of a node is equal to the size of alphabet. So 26.
- Trie supports search, insert, and delete in $\mathcal{O}(L)$ where $L$ is the length of the key.
- We can efficiently do **prefix search** with Trie.

## An example of a Trie
```
    root
     |
     g
     |
     e
     |
     e
   / | \
  k  r  z
 / \
s   t
```
So keys are
- geeks
- geer
- geekt
- geez

## Example:
#### [Trie Implementation](trie_implementation/description.md)
#### [Word Search II](word_search_II/description.md)
#### [Design Add and Search Words Data Structure](design_add_and_search_words_data_structure/description.md)
#### [Implement Trie](implement_trie/description.md)
#### [Design Search Autocomplete System (Premium)](design_search_autocomplete_system/description.md)
#### [Search Suggestions System](./search_suggestions_system/description.md)