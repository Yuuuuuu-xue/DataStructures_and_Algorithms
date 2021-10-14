DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Disjoint Set ADT](#disjoint-set-adt)
- [Examples:](#examples)
    - [Disjoint Set Path Compression by Union Implementation](#disjoint-set-path-compression-by-union-implementation)

## Disjoint Set ADT
We have the following operations:
- **MAKE-SET(x)**: given element x that does not already belong to one of the sets, create a new set {x} that contains only x. Assign x as the representative of that new set.
- **FIND-SET(x)**: given element x, return the representative of the set that contains x (or NIL if x does not belong to any set).
- **UNION(x, y)**: given two distinct elements x and y, let S_x be the set that contains x and S_y be the set that containts y. Form a new set consisting of S_x union S_y and remove S_x and S_y from the collection. Pick a representative for the new set. As a precondition, it is required that x and y each be an element of some set.


## Examples:
#### [Disjoint Set Path Compression by Union Implementation](./implementation/description.md)
