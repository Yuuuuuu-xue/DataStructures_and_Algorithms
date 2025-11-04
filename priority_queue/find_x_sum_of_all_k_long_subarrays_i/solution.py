from typing import List
from collections import defaultdict
import heapq

class Solution:
    def xSum(self, m, x):
        # Find the top-x
        pq = []
        for k in m:
            heapq.heappush(pq, (m[k], k))
            if len(pq) > x:
                # Need to pop it
                heapq.heappop(pq)

        o = 0
        # Find the sum
        for k, v in pq:
            o += k * v
        return o

    def findXSum(self, nums: List[int], k: int, x: int) -> List[int]:
        n = len(nums)
        
        window = defaultdict(int)
        # Construct the initial window
        for i in range(k):
            window[nums[i]] += 1

        o = [self.xSum(window, x)]

        for i in range(k, n):
            # Update the window
            window[nums[i]] += 1
            window[nums[i - k]] -= 1
            o.append(self.xSum(window, x))
        return o
        
    
