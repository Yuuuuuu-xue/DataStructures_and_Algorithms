## Spanning Tree
Click [here](../notes.md) to go back to the notes page.

## Prim Algorithm
- Pick a root vertex and grow T by connecting one isolated vertex to T
- At each step, connected the vertex (not in T) which has the cheapest edge into the current T.
- Thus, we will need min heap to solve this question. 

## Solution
- [Python Solution](prim_algorithm.py)
