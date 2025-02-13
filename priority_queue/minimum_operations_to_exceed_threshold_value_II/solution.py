from typing import List
import heapq

class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        heapq.heapify(nums)
        num_operations = 0

        while len(nums) >= 2:
            x = heapq.heappop(nums)
            y = heapq.heappop(nums)

            if x >= k: 
                return num_operations
            heapq.heappush(nums, min(x, y) * 2 + max(x, y))
            num_operations += 1
        
        return num_operations
