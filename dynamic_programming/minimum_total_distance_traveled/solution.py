from typing import List
from functools import lru_cache

class Solution:
    def minimumTotalDistance(self, robot: List[int], factory: List[List[int]]) -> int:
        robot.sort()
        factory.sort()

        @lru_cache(None)
        def dp(robot_i: int, factory_i: int):
            if robot_i >= len(robot):
                # Finish traversing all robots, no distance
                return 0
            if factory_i >= len(factory):
                # Finish traversing all factories, invalid solution
                return float('inf')
            
            # Option 1: skip current factory for robot_i, move to the next facotry
            min_dist = dp(robot_i, factory_i + 1)

            # Option 2: assign current robot to factory_i, and the following robots until factor_i reach to its limit
            total_dist = 0
            for i in range(factory[factory_i][1]):
                robot_idx = robot_i + i
                if robot_idx < len(robot):
                    total_dist += abs(robot[robot_idx] - factory[factory_i][0])
                    # The next robot
                    min_dist = min(min_dist, total_dist + dp(robot_idx + 1, factory_i + 1))
                else:
                    break
            return min_dist

        return dp(0, 0)
                


