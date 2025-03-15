from typing import List

class Solution:
    def minCapability(self, nums: List[int], k: int) -> int:
        left = min(nums)
        right = max(nums)

        o = right + 1

        while left <= right:
            mid = (left + right) // 2

            # Search if there is at least k non-consecutive elements <= mid
            i = 0
            c = 0
            while i < len(nums) and c <= k:
                if nums[i] <= mid:
                    i += 2
                    c += 1
                else:
                    i += 1
            
            if c >= k:
                # Works, search for smaller value
                o = min(o, mid)
                right = mid - 1
            else:
                left = mid + 1
        
        return o
