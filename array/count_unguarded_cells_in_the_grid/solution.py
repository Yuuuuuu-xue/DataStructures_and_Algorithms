from typing import List

class Solution:
    def countUnguarded(self, m: int, n: int, guards: List[List[int]], walls: List[List[int]]) -> int:
        graph = [[0 for _ in range(n)] for _ in range(m)]
        
        for w in walls:
            graph[w[0]][w[1]] = 1

        for g in guards:
            graph[g[0]][g[1]] = 2

        num_visited = 0

        for g in guards:
            for d in [(1, 0), (0, 1), (-1, 0), (0, -1)]:
                i = 1
                while True:
                    x = g[0] + d[0] * i
                    y = g[1] + d[1] * i

                    # A not valid, stop
                    if x < 0 or x >= m or y < 0 or y >= n:
                        break

                    # Already visited, continue
                    if graph[x][y] == 3:
                        i += 1
                        continue
                
                    if graph[x][y] != 0:
                        # visited a guard or wall, stop
                        break
                    
                    num_visited += 1
                    graph[x][y] = 3
                    i += 1
        
        return m * n - len(guards) - len(walls) - num_visited
        
