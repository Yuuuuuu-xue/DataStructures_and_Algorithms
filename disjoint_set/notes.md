DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Disjoint Set ADT](#disjoint-set-adt)
- [Examples:](#examples)
    - [Disjoint Set Path Compression by Union Implementation](#disjoint-set-path-compression-by-union-implementation)
    - [Number of Islands](#number-of-islands)
    - [Satisfiability of Equality Equations](#satisfiability-of-equality-equations)
    - [Validate Binary Tree Nodes](#validate-binary-tree-nodes)

## Disjoint Set ADT
We have the following operations:
- **MAKE-SET(x)**: given element x that does not already belong to one of the sets, create a new set {x} that contains only x. Assign x as the representative of that new set.
- **FIND-SET(x)**: given element x, return the representative of the set that contains x (or NIL if x does not belong to any set).
- **UNION(x, y)**: given two distinct elements x and y, let S_x be the set that contains x and S_y be the set that containts y. Form a new set consisting of S_x union S_y and remove S_x and S_y from the collection. Pick a representative for the new set. As a precondition, it is required that x and y each be an element of some set.


## Examples:
#### [Disjoint Set Path Compression by Union Implementation](./implementation/description.md)
#### [Number of Islands](number_of_islands/description.md)
#### [Satisfiability of Equality Equations](./satisfiability_of_equality_equations/description.md)
#### [Validate Binary Tree Nodes](./validate_binary_tree_nodes/description.md)
#### [Making a Large Island](./making_a_large_island/description.md)
#### [Longest Consecutive Sequence](./longest_consecutive_sequence/description.md)