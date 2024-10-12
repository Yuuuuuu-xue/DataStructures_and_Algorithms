from typing import List
import heapq

class Solution:
    def minGroups(self, intervals: List[List[int]]) -> int:
        end_time_min_heap = []

        intervals.sort()

        for start, end in intervals:
            if not end_time_min_heap or end_time_min_heap[0] >= start:
                # new group
                heapq.heappush(end_time_min_heap, end)
            else:
                # use existing group
                heapq.heappop(end_time_min_heap)
                heapq.heappush(end_time_min_heap, end)
        
        return len(end_time_min_heap)
