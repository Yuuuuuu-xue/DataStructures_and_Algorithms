from typing import List
import heapq

class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        m = []

        for gift in gifts:
            heapq.heappush(m, -gift)

        while k:
            k -= 1
            gifts = -heapq.heappop(m)
            heapq.heappush(m, -int(gifts ** 0.5))

        gifts_left = 0
        for item in m:
            gifts_left += -item
        
        return gifts_left