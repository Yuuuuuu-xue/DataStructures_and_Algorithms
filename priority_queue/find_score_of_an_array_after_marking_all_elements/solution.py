from typing import List
import heapq

class Solution:
    def findScore(self, nums: List[int]) -> int:
        pq = []

        for i, item in enumerate(nums):
            heapq.heappush(pq, (item, i))
        
        o = 0

        while pq:
            item, i = heapq.heappop(pq)

            if nums[i] > 0:
                o += nums[i]
                nums[i] *= -1
                if i > 0 and nums[i - 1] > 0:
                    nums[i - 1] *= -1
                if i < len(nums) - 1 and nums[i + 1] > 0:
                    nums[i + 1] *= -1
        
        return o
