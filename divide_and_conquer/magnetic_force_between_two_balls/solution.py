from typing import List

class Solution:
    def solve(self, position: List[int], m: int, d: int) -> bool:
        num_balls = 1
        prev_pos = position[0]
        i = 1
        while i < len(position):
            if position[i] - prev_pos >= d:
                num_balls += 1
                prev_pos = position[i]

                if num_balls >= m :
                    return True
            i += 1
        
        return False

    def maxDistance(self, position: List[int], m: int) -> int:
        position.sort()
        left = 1
        right = position[-1] - position[0]
        max_dist = 0

        while left <= right:
            mid = (left + right) // 2
            # print(mid, self.solve(position, m, mid))
            if self.solve(position, m, mid):
                max_dist = max(max_dist, mid)
                # Search for more larger value
                left = mid + 1
            else:
                right = mid - 1
        
        return max_dist
