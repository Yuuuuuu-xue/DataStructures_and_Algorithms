from typing import List

class Solution:
    def maximumImportance(self, n: int, roads: List[List[int]]) -> int:
        # Find and sort the degree
        degree = [[0, i] for i in range(n)]
        for road in roads:
            degree[road[0]][0] += 1
            degree[road[1]][0] += 1
        degree.sort(reverse=True)

        # Assign score to each node
        score = [0 for _ in range(n)]
        for i in range(n):
            score[degree[i][1]] = n - i

        # Calculate the total score
        total_score = 0
        for road in roads:
            total_score += score[road[0]] + score[road[1]]
        
        return total_score
