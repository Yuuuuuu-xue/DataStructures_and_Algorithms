## Shorest Weight Path
Click [here](../notes.md) to go back to the notes page.

## Dijkstra Algorithm
Dijkstra Algorithm solves the problem of a single source shortest path on **non-negative** weights. It uses Greedy Algorithm with priority queue implmented by min heap to solve the problem. We know that min weight path from $s$ to $s$ is 0 since we assume weights $\geq 0$. Thus, we will use a min heap to store each node $x$ the current min weight to from $s$ to $x$. The greedy choice is to a node $x$ with min path weights to $s$ and add it to the solution. And we can update every neighbours $y$ of $x$ if min distance from $y$ to $s$ is larger than min weight from $x$ to $s$ + edge weight from $x$ to $y$. Since $y \rightarrow x \rightarrow \dots \rightarrow s$ is a valid path.

## Pseudocode
```
procedure Dijkstra(G=(V, E, w), s)
    define array d of size |V|
    set d[v] = infinity for all v in V
    set d[s] = 0
    define array parent of size |V|
    set parent[v] = NIL for all v in V
    let Q be a priority queue initialized with (v, d[v]) for v in V
    S := 0
    while Q is not empty do
        u = Extract-Min(Q)
        S = S U {u}
        for each vertex v in Adj[u] do
            if d[v] > d[u] + w[u, v] then
                d[v] = d[u] + w[u, v]
                parent[v] = u
                Decrease-Key(Q, v)
```

## Complexity Analysis
- **Time complexity**: 
  - if $Q$ is implemented via a **binary heap**, then the time complexity is $\Theta(m \lg n)$
  - if $Q$ is implemented via a **Fibonacci heap**, then the time complexity is $\Theta(m + n \lg n)$
- **Space complexity**: $\Theta(n)$

## Solutions
- [Python Solution](dijkstra_algorithm.py)