from typing import List

class Solution:
    def survivedRobotsHealths(self, positions: List[int], healths: List[int], directions: str) -> List[int]:
        robots = [(pos, i) for i, pos in enumerate(positions)]
        robots.sort()

        stack = []
        survived_robots = []
        for robot, i in robots:
            if directions[i] == 'R':
                stack.append((healths[i], i))
            else:
                robot_health = healths[i]
                while robot_health > 0 and stack:
                    if stack[-1][0] < robot_health:
                        robot_health -= 1
                        stack.pop()
                    elif stack[-1][0] == robot_health or stack[-1][0] == 1:
                        # Check == 1 here since we left with stack[-1][0] > robot_health, but if health = 1, then health = 0 and remove it
                        robot_health = 0
                        stack.pop()
                    else:
                        last_item = stack.pop()
                        stack.append((last_item[0] - 1, last_item[1]))
                        robot_health = 0
                
                if robot_health > 0:
                    survived_robots.append((robot_health, i))
        
        survived_robots.extend(stack)
        survived_robots.sort(key=lambda robot: robot[1])

        return [robot_health for robot_health, _ in survived_robots]
