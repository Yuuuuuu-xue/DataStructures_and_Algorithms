DataStructures_and_Algorithms
Click [here](../README.md) to main page

Table of Contents:
- [Shorest Path Problem](#shorest-path-problem)
- [Optimal Substructure](#optimal-substructure)
- [Different Version of Shorest Weight Path Problem](#different-version-of-shorest-weight-path-problem)
    - [Single Source Shorest Path](#single-source-shorest-path)
    - [Single Destination Shorest Path](#single-destination-shorest-path)
    - [All Pairs Shorest Path](#all-pairs-shorest-path)
    - [Negative Weight](#negative-weight)
- [Examples:](#examples)
    - [Dijkstra Algorithm Implementation](#dijkstra-algorithm-implementation)
    - [Network Delay Time](#network-delay-time)

## Shorest Path Problem
Given a weighted, directed graph $G = (V, E)$, with weight function $w: E \rightarrow \mathbb{R}$, compute a shorest path (path with minimum total weight) from a source node $s$ to a destination node $t$.

## Optimal Substructure
Let $P = \; <v_0, v_1, \dots, v_k>$ be a shorest path from $v_0$ to $v_k$. Then $<v_i, \dots, v_j>$ is a shorest path from $v_i$ to $v_j$ for any $0 \leq i < j \leq k$.

## Different Version of Shorest Weight Path Problem
#### Single Source Shorest Path
Given one source node $s$, find the shorest path to every other vertices.

#### Single Destination Shorest Path
Given one destination node $t$, find the shorest path from every other vertices to $t$.

#### All Pairs Shorest Path
We want to find the shorest weight path for every pair of nodes (i, j) for $i, j \in V$.

#### Negative Weight
We want to any above three problems even if the weight can be negative.

## Examples:
#### [Dijkstra Algorithm Implementation](dijkstra_algorithm/description.md)
#### [Network Delay Time](network_delay_time/description.md)