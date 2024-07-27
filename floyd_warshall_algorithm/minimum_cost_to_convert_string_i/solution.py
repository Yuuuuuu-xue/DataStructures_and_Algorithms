from typing import List

class Solution:
    def floyd_warshall(self, original: List[str], changed: List[str], cost: List[int]):
        mat = [[float('inf') for _ in range(26)] for _ in range(26)]

        for i in range(26):
            mat[i][i] = 0
        
        for i in range(len(original)):
            u = ord(original[i][0]) - ord('a')
            v = ord(changed[i][0]) - ord('a')
            w = cost[i]

            mat[u][v] = min(mat[u][v], w)
        
        for k in range(26):
            for i in range(26):
                for j in range(26):
                    mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j])
        return mat

    def minimumCost(self, source: str, target: str, original: List[str], changed: List[str], cost: List[int]) -> int:
        min_cost_mat = self.floyd_warshall(original, changed, cost)

        min_cost = 0
        for i in range(len(source)):
            u = ord(source[i]) - ord('a')
            v = ord(target[i]) - ord('a')

            if min_cost_mat[u][v] == float('inf'):
                return -1
            
            min_cost += min_cost_mat[u][v]
        
        return min_cost
