from typing import List
import heapq

class Solution:
    def maxEvents(self, events: List[List[int]]) -> int:
        events.sort()
        pq = []

        o = 0
        curr_day = 1
        i = 0

        while i < len(events) or pq:
            # Add all available events to the pq
            while i < len(events) and events[i][0] == curr_day:
                heapq.heappush(pq, events[i][1])
                i += 1
            # Remove events that are expired
            while pq and pq[0] < curr_day:
                heapq.heappop(pq)
            # Remove one event and attend it (end earliest)
            if pq:
                heapq.heappop(pq)
                o += 1
            curr_day += 1
        return o

