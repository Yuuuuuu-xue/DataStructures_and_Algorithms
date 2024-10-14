from typing import List
import heapq
import math

class Solution:
    def maxKelements(self, nums: List[int], k: int) -> int:
        max_heap = []
        
        for num in nums:
            heapq.heappush(max_heap, -num)
        
        curr_score = 0

        while max_heap and k:
            k -= 1
            max_score = -heapq.heappop(max_heap)

            curr_score += max_score
            heapq.heappush(max_heap, -(math.ceil(max_score / 3)))
        
        return curr_score


