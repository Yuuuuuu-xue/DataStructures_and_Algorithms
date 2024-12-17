from typing import List
import heapq

class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        pq = []
        for i, item in enumerate(nums):
            pq.append((item, i))
        heapq.heapify(pq)
        
        while k:
            k -= 1
            item, i = heapq.heappop(pq)
            heapq.heappush(pq, (item * multiplier, i))
        
        for item, i in pq:
            nums[i] = item
        
        return nums
