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
    - [The Maze II](#the-maze-ii)
    - [01 Matrix](#01-matrix)
    - [Frog Jump](#frog-jump)
    - [Shortest Path Visiting All Nodes](#shortest-path-visiting-all-nodes)
    - [Restore the Array from Adjacent Pairs](#restore-the-array-from-adjacent-pairs)
    - [Bus Routes](#bus-routes)
    - [Out of Boundary Paths](#out-of-boundary-paths)
    - [Find All People With Secret](#find-all-people-with-secret)
    - [Count Sub Islands](#count-sub-islands)
    - [Island Perimeter](#island-perimeter)
    - [Find All Groups of Farmland](#find-all-groups-of-farmland)
    - [Minimum Number of Vertices to Reach All Nodes](#minimum-number-of-vertices-to-reach-all-nodes)
    - [Find Center of Star Graph](#find-center-of-star-graph)
    - [All Ancestors of a Node in a Directed Acyclic Graph](#all-ancestors-of-a-node-in-a-directed-acyclic-graph)

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
#### [The Maze II](the_maze_II/description.md)
#### [01 Matrix](./01_matrix/description.md)
#### [Frog Jump](./frog_jump/description.md)
#### [Shortest Path Visiting All Nodes](./shortest_path_visiting_all_nodes/description.md)
#### [Restore the Array from Adjacent Pairs](./restore_the_array_from_adjacent_pairs/description.md)
#### [Bus Routes](./bus_routes/description.md)
#### [Out of Boundary Paths](./out_of_boundary_paths/description.md)
#### [Find All People With Secret](./find_all_people_with_secret/description.md)
#### [Count Sub Islands](./count_sub_islands/description.md)
#### [Island Perimeter](./island_perimeter/description.md)
#### [Find All Groups of Farmland](./find_all_groups_of_farmland/description.md)
#### [Minimum Number of Vertices to Reach All Nodes](./minimum_number_of_vertices_to_reach_all_nodes/description.md)
#### [Find Center of Star Graph](./find_center_of_star_graph/description.md)
#### [All Ancestors of a Node in a Directed Acyclic Graph](./all_ancestors_of_a_node_in_a_directed_acyclic_graph/description.md)
#### [Step-By-Step Directions From a Binary Tree Node to Another](./step_by_step_directions_from_a_binary_tree_node_to_another/description.md)
#### [Second Minimum Time to Reach Destination](./second_minimum_time_to_reach_destination/description.md)
#### [Most Stones Removed with Same Row or Column](./most_stones_removed_with_same_row_or_column/description.md)
#### [Sliding Puzzle](./sliding_puzzle/description.md)
#### [Find Champion II](./find_champion_II/description.md)
#### [Shortest Distance After Road ADdition Queries I](./shortest_distance_after_road_addition_queries_i/description.md)
#### [Minimum Obstacle Removal to Reach Corner](./minimum_obstacle_removal_to_reach_corner/description.md)
#### [Valid Arrangement of Pairs](./valid_arrangement_of_pairs/description.md)
#### [Reverse Odd Levels of Binary Tree](./reverse_odd_levels_of_binary_tree/description.md)
#### [Maximum Number of K-Divisible Components](./maximum_number_of_k_divisible_components/description.md)
#### [Minimum Number of Operations to Sort a Binary Tree by Level](./minimum_number_of_operations_to_sort_a_binary_tree_by_level/description.md)
#### [Find Minimum Diameter After Merging Two Trees](./find_minimum_diameter_after_merging_two_trees/description.md)
#### [Find Largest Value in Each Tree Row](./find_largest_value_in_each_tree_row/description.md)
#### [Map of Highest Peak](./map_of_highest_peak/description.md)
#### [Divide Nodes Into the Maximum Number of Groups](./divide_nodes_into_the_maximum_number_of_groups/description.md)
#### [Maximum Number of Points From Grid Queries](./maximum_number_of_points_from_grid_queries/description.md)
#### [Lowest Common Ancestor of Deepest Leaves](./lowest_common_ancestor_of_deepest_leaves/description.md)
#### [Maximize the Number of Target Nodes After Connecting Trees I](./maximize_the_number_of_target_nodes_after_connecting_trees_i/description.md)
#### [Maximize the Number of Target Nodes After Connecting Trees II](./maximize_the_number_of_target_nodes_after_connecting_trees_ii/description.md)
#### [Find Closest Node to Given Two Nodes](./find_closest_node_to_given_two_nodes/description.md)
#### [Snakes and Ladders](./snakes_and_ladders/description.md)
#### [Maximum Candies You Can Get from Boxes](./maximum_candies_you_can_get_from_boxes/description.md)