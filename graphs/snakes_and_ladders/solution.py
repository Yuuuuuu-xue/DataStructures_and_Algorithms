from typing import List

class Solution:
    def snakesAndLadders(self, board: List[List[int]]) -> int:
        curr = 1
        n = len(board)
        m = {}

        for i in range(-1, -n - 1, -1):
            if i % 2 != 0:
                # Order start left to right
                for j in range(n):
                    m[curr] = ((i, j))
                    curr += 1
            else:
                for j in range(n - 1, -1, -1):
                    m[curr] = ((i, j))
                    curr += 1
        
        # BFS
        visited = {1}
        q = [1]
        o = 0

        while q:
            next_q = []
            for item in q:
                if item == n * n:
                    return o
                
                for k in range(1, 7):
                    # Roll the dice
                    next_item = item + k
                    if next_item > n * n:
                        break
                    i, j = m[next_item]
                    if board[i][j] != -1:
                        # Ladder or snake
                        next_item = board[i][j]
                    
                    if next_item not in visited:
                        visited.add(next_item)
                        next_q.append(next_item)
            
            q = next_q
            o += 1
        
        return -1
                

