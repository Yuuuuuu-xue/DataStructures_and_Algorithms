from typing import List
from collections import defaultdict

class Solution:
    def dfs(self, row, col, seen, curr_i, curr_j):
        self.num_nodes_in_path += 1
        for neighbor in row[curr_i]:
            # neighbors in the same row
            if neighbor not in seen:
                seen.add(neighbor)
                self.dfs(row, col, seen, neighbor[0], neighbor[1])
        for neighbor in col[curr_j]:
            # neighbors in the same col but not in the same row
            if neighbor[0] == curr_i:
                continue
            if neighbor not in seen:
                seen.add(neighbor)
                self.dfs(row, col, seen, neighbor[0], neighbor[1])
            
    def removeStones(self, stones: List[List[int]]) -> int:
        # row and column
        row = defaultdict(list)
        col = defaultdict(list)
        seen = set()
        
        for i, j in stones:
            row[i].append((i, j))
            col[j].append((i, j))
        
        num_stones = 0

        for i, j in stones:
            if (i, j) not in seen:
                seen.add((i, j))
                self.num_nodes_in_path = 0
                self.dfs(row, col, seen, i, j)
                num_stones += self.num_nodes_in_path - 1
        
        return num_stones
