DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Dijkstra's Algorithm](#dijkstras-algorithm)
- [Pseudocode](#pseudocode)
- [Runtime Complexity](#runtime-complexity)
- [Examples](#examples)
    - [Minimum Costs to Make At Least One Valid Path](#minimum-costs-to-make-at-least-one-valid-path)
    - [Path with Minimum Effort](#path-with-minimum-effort)

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
#### [Path with Minimum Effort](./path_with_minimum_effort/description.md)
#### [Find the Safest Path in a Grid](./find_the_safest_path_in_a_grid/description.md)
#### [Minimum Time to Visit a Cell in a Grid](./minimum_time_to_visit_a_cell_in_a_grid/description.md)
#### [Number of Ways to Arrive at Destination](./number_of_ways_to_arrive_at_destination/description.md)
#### [Find Minimum Time to Reach Last Room I](./find_minimum_time_to_reach_last_room_i/description.md)
#### [Find Minimum Time to Reach Last Room II](./find_minimum_time_to_reach_last_room_ii/description.md)