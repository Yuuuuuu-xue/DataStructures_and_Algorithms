from typing import List
from collections import defaultdict, deque

class Solution:
    def secondMinimum(self, n: int, edges: List[List[int]], time: int, change: int) -> int:
        graph = defaultdict(list)
        # Since bi-directional graph
        for u, v in edges:
            graph[u].append(v)
            graph[v].append(u)    

        # Keep track of min distance
        min_dist = [float('inf') for _ in range(n + 1)]
        second_min_dist = [float('inf') for _ in range(n + 1)]

        # BFS with (time, node)
        queue = deque([(0, 1)])
        min_dist[1] = 0

        while queue:
            curr_time, curr_node = queue.popleft()
            for neighbor in graph[curr_node]:
                red_light_cycles = curr_time // change
                
                new_time = curr_time + time

                # Red light, need to wait until it turns red
                if red_light_cycles % 2 != 0:
                    new_time = (change * (1 + red_light_cycles)) + time
                
                # Update min dist
                if min_dist[neighbor] > new_time:
                    second_min_dist[neighbor] = min_dist[neighbor]
                    min_dist[neighbor] = new_time
                    queue.append((new_time, neighbor))
                elif min_dist[neighbor] < new_time < second_min_dist[neighbor]:
                    second_min_dist[neighbor] = new_time
                    queue.append((new_time, neighbor))
            
        return second_min_dist[n]
