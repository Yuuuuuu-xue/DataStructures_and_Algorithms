from typing import List

class Solution:
    def floyd_warshall(self, n: int, edges: List[List[int]]):
        mat = [[float('inf') for _ in range(n)] for _ in range(n)]
        for i in range(n):
            mat[i][i] = 0
        for u, v, w in edges:
            mat[u][v] = w
            mat[v][u] = w
        
        for k in range(n):
            for i in range(n):
                for j in range(n):
                    mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j])
        return mat
    
    def findTheCity(self, n: int, edges: List[List[int]], distanceThreshold: int) -> int:
        shorest_weight_mat = self.floyd_warshall(n, edges)

        smallest_num_cities = n + 1
        city = 0

        for i in range(n):
            # Start with -1 since shorest_weight_mat[i][i] = 0 and must be <= distanceThreshold
            num_cities = -1
            for j in range(n):
                if shorest_weight_mat[i][j] <= distanceThreshold:
                    num_cities += 1
            
            if num_cities <= smallest_num_cities:
                smallest_num_cities = num_cities
                city = i
        
        return city
