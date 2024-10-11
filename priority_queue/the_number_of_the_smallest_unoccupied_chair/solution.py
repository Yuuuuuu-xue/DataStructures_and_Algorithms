from typing import List
import heapq

class Solution:
    def smallestChair(self, times: List[List[int]], targetFriend: int) -> int:
        times_with_i = [(time[0], time[1], i) for i, time in enumerate(times)]
        times_with_i.sort()
        leaving_min_heap = []
        chair_min_heap = []

        next_available_chair = 0

        for arrival, leave, i in times_with_i:
            # Remove all the friends that will leave
            while leaving_min_heap and leaving_min_heap[0][0] <= arrival:
                heapq.heappush(chair_min_heap, leaving_min_heap[0][1])
                heapq.heappop(leaving_min_heap)
        
            next_chair = 0
            if not chair_min_heap:
                next_chair = next_available_chair
                next_available_chair += 1
            else:
                next_chair = heapq.heappop(chair_min_heap)
            
            if i == targetFriend:
                return next_chair

            heapq.heappush(leaving_min_heap, (leave, next_chair))
        
        return -1
            

