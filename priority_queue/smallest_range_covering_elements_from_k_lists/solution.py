from typing import List
import heapq

class Solution:
    def smallestRange(self, nums: List[List[int]]) -> List[int]:
        curr_max = float('-inf')
        curr_min = float('inf')
        min_heap = []

        for i, num_list in enumerate(nums):
            curr_max = max(curr_max, num_list[0])
            curr_min = min(curr_min, num_list[0])
            heapq.heappush(min_heap, (num_list[0], i, 0))
        
        optimal_max = curr_max
        optimal_min = curr_min
        
        while min_heap:
            curr_min, i, j = heapq.heappop(min_heap)
            
            if curr_max - curr_min < optimal_max - optimal_min: 
                optimal_max = curr_max
                optimal_min = curr_min
            
            if j + 1 < len(nums[i]):
                # Still elements 
                next_elem = nums[i][j + 1]
                heapq.heappush(min_heap, (next_elem, i, j + 1))
                curr_max = max(curr_max, next_elem)
            else:
                break
        
        return [optimal_min, optimal_max]
