from typing import List
from collections import defaultdict

class Solution:
    def magnificentSets(self, n: int, edges: List[List[int]]) -> int:
        global_graph = defaultdict(list)
        for u, v in edges:
            global_graph[u].append(v)
            global_graph[v].append(u)

        # Since graph can be disconncted
        graphs = []

        # Determine if the graph is bipartite or not
        curr_graph = defaultdict(list)
        color = {}
        visited = set()

        for node in global_graph:
            if node in visited:
                continue
            q = [node]
            visited.add(node)
            curr_color = 0
            color[node] = curr_color
            curr_nodes = []
            while q:
                next_q = []
                for node in q:
                    curr_nodes.append(node)
                    for neighbor in global_graph[node]:
                        if neighbor in color and color[neighbor] == color[node]:
                            return -1
                        color[neighbor] = 1 - curr_color
                        if neighbor not in visited:
                            visited.add(neighbor)
                            next_q.append(neighbor)
                q = next_q
                next_q = []
                curr_color = 1 - curr_color

            graphs.append(curr_nodes)

        if len(curr_graph) > 0:
            graphs.append(curr_graph)

        max_groups = 0
        # Loop over each disconnected graph
        for nodes in graphs:
            print(nodes)
            n -= len(nodes)
            curr_group = 0
    
            # Perform bfs for each node
            for node in nodes:
                q = [node]
                curr_level = 0
                visited = { node }

                while q:
                    next_q = []
                    
                    for curr_node in q:
                        for neighbor_node in global_graph[curr_node]:
                            if neighbor_node not in visited:
                                visited.add(neighbor_node)
                                next_q.append(neighbor_node)
                    
                    q = next_q
                    curr_level += 1
            
                curr_group = max(curr_group,  curr_level)
        
            max_groups += curr_group

        # + all the disconncected nodes
        return max_groups + n
