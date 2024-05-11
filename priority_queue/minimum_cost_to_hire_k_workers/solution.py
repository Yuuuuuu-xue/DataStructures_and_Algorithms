from typing import List
import heapq

class Solution:
    def mincostToHireWorkers(self, quality: List[int], wage: List[int], k: int) -> float:
        min_heap_ratio = []
        max_heap_quality = []

        for i in range(len(quality)):
            heapq.heappush(min_heap_ratio, (wage[i] / quality[i], quality[i]))
        
        total_quality = 0
        min_cost = float('inf')
    
        for i in range(len(quality)):
            ratio, q = heapq.heappop(min_heap_ratio)
            total_quality += q
            heapq.heappush(max_heap_quality, -q)

            # num elements > k
            if i >= k:
                top_q = heapq.heappop(max_heap_quality)
                total_quality += top_q

            # num elements >= k
            if i + 1 >= k:
                min_cost = min(min_cost, ratio * total_quality)
        
        return min_cost

