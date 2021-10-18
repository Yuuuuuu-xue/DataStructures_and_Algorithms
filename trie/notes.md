DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Trie](#trie)
- [An example of a Trie](#an-example-of-a-trie)

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

