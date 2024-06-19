from typing import List

class Solution:
    def solve(self, bloomDay: List[int], m: int, k: int, d: int) -> bool:
        curr = 0
        i = 0
        for day in bloomDay:
            if day <= d:
                i += 1
            else:
                i = 0
            if i >= k:
                i = 0
                curr += 1
            if curr >= m:
                return True
        return curr >= m


    def minDays(self, bloomDay: List[int], m: int, k: int) -> int:
        left = 0
        max_ = max(bloomDay)
        right = max_

        if len(bloomDay) < m * k:
            return -1

        min_days = max_ + 1
        
        while left <= right:
            mid = (left + right) // 2
            # print(mid, self.solve(bloomDay, m, k, mid))
            if self.solve(bloomDay, m, k, mid):
                min_days = min(min_days, mid)
                # If possible search for smaller days
                right = mid - 1
            else:
                left = mid + 1
        
        if min_days == max_ + 1:
            return -1
        return min_days
