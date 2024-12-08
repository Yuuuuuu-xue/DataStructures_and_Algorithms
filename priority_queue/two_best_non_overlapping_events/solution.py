from typing import List
import heapq

class Solution:
    def maxTwoEvents(self, events: List[List[int]]) -> int:
        events.sort()
        pq = []

        o = 0
        prev_event_profit = 0

        for start, end, curr_profit in events:
            # Previous end time < curr start time
            while pq and pq[0][0] < start:
                prev_event_profit = max(prev_event_profit, pq[0][1])
                heapq.heappop(pq)
            
            profit = curr_profit + prev_event_profit

            o = max(o, profit)
            heapq.heappush(pq, (end, curr_profit))
        
        return o

