from typing import List

class Solution:
    def maxRunTime(self, n: int, batteries: List[int]) -> int:
        left = 0
        right = sum(batteries) // n

        o = 0

        while left <= right:
            mid = (left + right) // 2

            # print(left, right, mid)

            total_execution_time = 0
            for b in batteries:
                total_execution_time += min(mid, b)
            
            if (total_execution_time // n) >= mid:
                # We can run at least mid minutes
                o = max(o, mid)
                left = mid + 1
            else:
                right = mid - 1
    
        return o

