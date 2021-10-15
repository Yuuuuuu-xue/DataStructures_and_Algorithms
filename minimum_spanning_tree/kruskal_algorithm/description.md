## Spanning Tree
Click [here](../notes.md) to go back to the notes page.

## Kruskal Algorithm
- Given a graph G = (V, E) where V is a list of vertices from 1 to n and E is a map that maps a vertex u to a list of vertices v that incident to u and v. In addition, we also have a map that maps the edge weight to a list of edges. 
- We want to return a list of edges that form a Minimum Spanning Tree.
- We will use Disjoint Set with Compression by Rank to solve this algorithm.

## PseudoCode:
```
T := {}
sort edges so w(e1) <= w(e2) <= ... <= w(em)
for i from 1 to m:
    let (ui, vi) = (ei)
    if ui, vi in different connected components of T:
        T = T union {ei}
return T
```

## Solution
- [Python Solution](kruskal_algorithm.py)
