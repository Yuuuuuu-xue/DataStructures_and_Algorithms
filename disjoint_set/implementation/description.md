## Disjoint Set
Click [here](../notes.md) to go back to the notes page.

## Problem
Implement the disjoint set using path compression with rank.
- The rank of a leaf is 0.
- The rank of internal node is 1 + max rank of its children.

## Operations:
- **MAKE-SET**: we will set the rank of new inserted leaf to 0
- **FIND-SET**: ranks unchanged and we will use path compression.
- **UNION**: nodes with higher rank will be the new root and its rank stay unchanged. If x and y have the equal rank, choose either as new root and its rank is increased by one. 

## Complexity Analysis
- Runtime Complexity: Since the disjoin set is implemented by path compression with union by rank, the runtime is O(1)
- Space Complexity: O(n)

## Solution:
- [Python Solution](disjoint_set_implementation.py)
- [C++](soluition.cpp)