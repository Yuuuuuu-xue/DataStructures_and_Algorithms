## Topological Sort
Click [here](../notes.md) to go back to the notes page.

## Pseudocode (based on DFS)
```
L <- Empty list that will contain the sorted nodes
leaves <- A queue of leaves
n <- number of nodes remaining

while leaves is not empty do
  leaf = top element of leaves
  for neighbor of leaf do
    remove edge e of (neighbor, leaf)
    if neighbor becomes a leaf do
      push neighbor into leaves
  push leaf into L

reverse L
```

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)