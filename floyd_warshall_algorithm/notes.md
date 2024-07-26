DataStructures_and_Algorithms
Click [here](../README.md) to main page

## Floyd-Warshall's Algorithm
Bellman-Ford and Dijkstra algorithms are both way to compute the shortest weight path from a single source. This means they can only compute the shorest path from a single source.

Floyd-Warshall, on the other hand, computes the shortest distances between every pair of vertices in the input graph. It tells the optimal distance between each pair of nodes.

It is an example of dynamic programming. The key idea is that the quickest path from A to C is the quickest path found so far from A to C, or it's the quickest path from A to B plus the quickest path from B to C.

## Pseudo-code
```
Initialize M matrix with |V| x |V| such that M[i][j] is the shortest distance between node i and j

For each cell (i, j) in M
    if i == j:
        M[i][j] = 0
    if (i, j) is an edge in E:
        M[i][j] = weight(i, j)
    else:
        M[i][j] = infinity

For k from 1 to |V|:
    for i from 1 to |V|:
        for j from 1 to |V|:
            if M[i][j] > M[i][k] + M[k][j]:
                M[i][j] = M[i][k] + M[k][j]
```

## Complexity Analysis
- Runtime Complexity: O(n^3)
- Space Complexity: O(n^2)

## Example
- [Find the City With the Smallest Number of Neighbors at a Threshold Distance](./find_the_city_with_the_smallest_number_of_neighbors_at_a_threshold_distance/description.md)