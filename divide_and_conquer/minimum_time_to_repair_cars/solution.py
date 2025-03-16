from typing import List

class Solution:
    def repairCars(self, ranks: List[int], cars: int) -> int:
        left = 0
        right = max(ranks) * cars * cars

        o = right + 1

        while left <= right:
            mid = (left + right) // 2

            # Binary search to check if we can repair cars under mid minutes
            repaired = 0
            for r in ranks:
                repaired += int((mid // r) ** 0.5)
                if repaired >= cars:
                    break
                    
            if repaired >= cars:
                o = min(o, mid)
                # Search for smaller time
                right = mid - 1
            else:
                left = mid + 1
        
        return o
