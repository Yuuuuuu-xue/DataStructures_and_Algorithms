DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Dijkstra's Algorithm](#dijkstras-algorithm)
- [Pseudocode](#pseudocode)
- [Runtime Complexity](#runtime-complexity)
- [Examples](#examples)
    - [Minimum Costs to Make At Least One Valid Path](#minimum-costs-to-make-at-least-one-valid-path)

## Dijkstra's Algorithm
Dijkstra's algorithm is an algorithm for finding the shortest weight paths between all the nodes to a given souce node.

## Pseudocode
```
function Dijkstra(Graph, source):
  dist[source] = 0
  create vertex priority queue Q
  Q.add_with_priority(source, dist[source])

  for each vertex v in Graphs.Vertices
    if v != source
      dist[v] = inf
      prev[v] = undefined
    Q.add_with_priority(v, dist[v])
  
  while Q is not empty:
    u = Q.extract_min()
    for each neighbor v of u:
      alt = dist[u] + Graph.Edges(u, v)
      if alt < dist[v] and dist[u] is not INF:
        dist[v] = alt
        prev[v] = u
        Q.decrease_priority(v, alt)
  return dist, prev
```

## Runtime Complexity
Everything before the while loop is initializing the priority queue, we loop over each vertex and insert into priority queue, thus the runtime is O(|V| lg |V|). The while loop iterates all the edges and thus the runtime is O(|E| lg |V|). Overall, the runtime is complexity is O((|V| + |E|) lg|V|). If we use a Fibonacci heap min-priority to optimize the runtime, then we have the runtime complexity of O(|E| + |V| lg |V|).

## Examples
#### [Minimum Costs to Make At Least One Valid Path](minimum_costs_to_make_at_least_one_valid_path_in_a_grid/description.md)