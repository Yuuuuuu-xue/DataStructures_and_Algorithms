DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Definition](#definition)
- [Graph Representation](#graph-representation)
- [Breadth First Search](#breadth-first-search)
- [Depth First Search](#depth-first-search)
- [Examples:](#examples)
    - [Is Bilteral Graph](#is-bilteral-graph)
    - [Jump Game IV](#jump-game-iv)
    - [Course Schedule](#course-schedule)
    - [Populating Next Right Pointers in Each Node II](#populating-next-right-pointers-in-each-node-ii)
    - [Deepest Leaves Sum](#deepest-leaves-sum)
    - [Shortest Path in Binary Matrix](#shortest-path-in-binary-matrix)
    - [Walls and Gates](#walls-and-gates)
    - [Pacific Atlantic Water Flow](#pacific-atlantic-water-flow)
    - [Open the Lock](#open-the-lock)
    - [Number of Operations to Make Network Connections](#number-of-operations-to-make-network-connections)
    - [Remove Invalid Parentheses](#remove-invalid-parentheses)

## Definition
- A **graph** is a tuple of two sets G = (V, E) where V is the set of vertices and E is the set of edges.
- An **undirected graph** is a graph where if we have (e1, e2) in E then we have (e2, e1) in E as well, so (e1, e2) is same as (e2, e1).
- A **directed graph** is a graph where (e1, e2) is different than (e2, e1).
- A **self loop** in a directed graph is an edge (e1, e1). Self loops are not allowed in undirected graph.
- If (u, v) is an edge in an undirected graph, then vertex v is **adjacent to** vertex u and vice versa. In directed graph, v is **adjacent to** u if there is an edge (u, v).
- In undirected graph, we say an edge (u, v) is **incident on** vertices u and v. In a directed graph, if we have (u, v), then we say the edge is **incident from** u and **incident to** v.
- In undirected graph, the **degree** of a vertex v is the number of edges incident on v. In directed graph, the **in-degree** of vertex v is the number of edges incident to v and the **out-degree** is the number of edges incident from v.
- In undirected graph, the **neighbourhood** of vertex v is the set of vertices u such that (u, v) is an edge. In directed graph, the **in-neighbourhood** of vertex v is the set of vertices u such that (u, v) is an edge and **out-neighbourhood** of vertex v is the set of vertices such that (v, u) is an edge.
- A **weighted-graph**, we assign a real number to each edge and we call this value **edge weight** or **edge cost**. 
- A **path** is a sequence of edges connected to each other: (v, u1), (u1, u2), ..., (uk, x).
- A path is **simple** if there is no repeated edge or vertex.
- A **cycle** is a path with the same starting and ending vertices. In undirected graph, a path forming a cycle must have no repeated vertices (except first and last) and must have at least 3 vertices. For example: (a, b), (b, c), (c, a) is a cycle.
- A cycle is **simple** if it has no repeated edge or vertex.
- A graph is **acyclic** if it contains no cycle.
- An undirected graph is **connected** if it contains a path between any two vertices.
- A **tree** is an undirected connected graph that is acyclic.
- A **forest** is a collection of (zero or more) disjoint trees.

## Graph Representation
- Adjacency Lists
- Adjacency Matrix

## Breadth First Search
- Visit all the neighbours of a vertex v before we move to the next node in the queue
- Time complexity: O(|V| + |E|)

## Depth First Search
- Search as deep as possible and then backtrack for already discovered nodes but not fully explored
- Time complexity: O(|V| + |E|)

## Examples:
#### [Is Bilteral Graph](is_bilateral/description.md)
#### [Jump Game IV](jump_game_IV/description.md)
#### [Course Schedule](course_schedule/description.md)
#### [Populating Next Right Pointers in Each Node II](populating_next_right_pointers_in_each_node_II/description.md)
#### [Deepest Leaves Sum](deepest_leaves_sum/description.md)
#### [Shortest Path in Binary Matrix](shortest_path_in_binary_matrix/description.md)
#### [Walls and Gates](walls_and_gates/description.md)
#### [Pacific Atlantic Water Flow](pacific_atlantic_water_flow/description.md)
#### [Open the Lock](open_the_lock/description.md)
#### [Number of Operations to Make Network Connections](number_of_operations_to_make_network_connected/description.md)
#### [Remove Invalid Parentheses](remove_invalid_parentheses/description.md)