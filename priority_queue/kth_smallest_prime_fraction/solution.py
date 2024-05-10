from typing import List
import heapq

class Solution:
    def kthSmallestPrimeFraction(self, arr: List[int], k: int) -> List[int]:
        min_heap = []
        last_i = len(arr) - 1
        for i in range(last_i):
            heapq.heappush(min_heap, (arr[i] / arr[last_i], i, last_i))
        
        k -= 1
        while k:
            k -= 1
            _, i, last_i = heapq.heappop(min_heap)
            if last_i - 1 > i:
                last_i -= 1
                heapq.heappush(min_heap, (arr[i] / arr[last_i], i, last_i))
        
        return min_heap[0][1], min_heap[0][2]
            
