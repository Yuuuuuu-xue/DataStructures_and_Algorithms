from typing import List
import heapq

class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        # O(n) to convert list to heap, *= -1 to convert min heap to max heap
        for i in range(len(happiness)):
            happiness[i] *= -1
        heapq.heapify(happiness)

        # O(k)
        o = 0
        for i in range(k):
            # O(lg n)
            top = heapq.heappop(happiness) * -1
            if top - i <= 0:
                return o
            o += top - i
        return o
