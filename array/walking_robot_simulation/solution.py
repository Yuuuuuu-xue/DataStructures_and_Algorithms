from typing import List

class Solution:
    def robotSim(self, commands: List[int], obstacles: List[List[int]]) -> int:
        obstacles_set = set()
        for obs in obstacles:
            obstacles_set.add((obs[0], obs[1]))
        
        x = 0
        y = 0

        directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

        dir_i = 0
        max_dist = 0

        for c in commands:
            if c == -1:
                dir_i += 1
                if dir_i == 4:
                    dir_i = 0
            elif c == -2:
                dir_i -= 1
                if dir_i == -1:
                    dir_i = 3
            else:
                for _ in range(c):
                    if (x + directions[dir_i][0], y + directions[dir_i][1]) in obstacles_set: 
                        break
                    x += directions[dir_i][0]
                    y += directions[dir_i][1]
                max_dist = max(max_dist, x * x + y * y)
        
        return max_dist
