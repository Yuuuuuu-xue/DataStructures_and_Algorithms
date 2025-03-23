    from typing import List
    import heapq
    from collections import defaultdict

    class Solution:
        def countPaths(self, n: int, roads: List[List[int]]) -> int:
            MOD = 10 ** 9 + 7
            if n == 1: 
                return 1
            graph = defaultdict(list)
            for u, v, w in roads:
                graph[u].append((v, w))
                graph[v].append((u, w))
            
            # (weight, node)
            pq = [(0, 0)]
            visited = set()
            # (0 to this node = weight, node)
            num_paths = [[float('inf'), 0] for _ in range(n)]
            num_paths[0] = [0, 1]

            while pq:
                w, node = heapq.heappop(pq)
                # print(w, node)
                if node in visited:
                    continue
                visited.add(node)
                
                # Loop over neighbors
                for v, new_w in graph[node]:
                    if v in visited:
                        continue
                    heapq.heappush(pq, (w + new_w, v))
                    # Update the count
                    if w + new_w < num_paths[v][0]:
                        num_paths[v][0] = w + new_w
                        # Number of ways to reach to node (shortest)
                        num_paths[v][1] = num_paths[node][1]
                    elif w + new_w == num_paths[v][0]:
                        num_paths[v][1] = (num_paths[v][1] + num_paths[node][1]) % MOD
                    # print(w + new_w, node, v, num_paths[v])
            
            return num_paths[n - 1][1] % MOD

