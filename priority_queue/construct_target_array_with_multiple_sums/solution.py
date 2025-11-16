from typing import List
import heapq

class Solution:
    def isPossible(self, target: List[int]) -> bool:
        pq = []
        curr_sum = 0

        for num in target:
            curr_sum += num
            heapq.heappush(pq, -num)
        
        while pq:
            curr_max = -heapq.heappop(pq)
            if curr_max == 1:
                return True

            prev_sum = curr_sum - curr_max
            
            if prev_sum >= curr_max or prev_sum < 1:
                return False

            x = curr_max % prev_sum
            curr_sum = prev_sum + x
            if x == 0 and prev_sum != 1: 
                return False
            heapq.heappush(pq, -x)
        
        return True
            
