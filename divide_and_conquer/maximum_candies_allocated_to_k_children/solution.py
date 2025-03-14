from typing import List

class Solution:
    def maximumCandies(self, candies: List[int], k: int) -> int:
        left = 1
        right = max(candies)

        o = 0

        while left <= right:
            mid = (left + right) // 2

            num_child = 0
            for candy in candies:
                num_child += candy // mid
                if num_child >= k:
                    break
            
            if num_child >= k:
                # it works
                o = max(o, mid)
                left = mid + 1
            else:
                right = mid - 1
        
        return o

            
