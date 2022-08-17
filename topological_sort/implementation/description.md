## Topological Sort
Click [here](../notes.md) to go back to the notes page.

## Pseudocode (based on DFS)
```
L <- Empty list that will contain the sorted nodes
while exists nodes without a permanent mark do
  select an unmarked node n
  visit(n)

function visit(node n)
  if n has a permanent mark then
    return
  if n has a temporary mark then
    stop (not a DAG)
  
  mark n with a temporary mark
  for each node m with an edge from n to m do
    visit(m)
  remove temporary mark from n
  mark n with a permanent mark
  add n to head of L
```

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(m) (highest height of the tree)

## Solution
- [C++](solution.cpp)