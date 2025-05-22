from typing import List
import heapq
from collections import defaultdict

class Solution:
    def maxRemoval(self, nums: List[int], queries: List[List[int]]) -> int:
        available = []
        active = []

        m = defaultdict(list)
        for l, r in queries:
            m[l].append(r)
        
        num_queries_used = 0

        for i in range(len(nums)):
            # Add available queries
            for r in m[i]:
                heapq.heappush(available, -r)
            
            # Remove non active queries
            while active and active[0] < i:
                num_queries_used += 1
                heapq.heappop(active)
            
            num_needed = nums[i] - len(active)

            while num_needed > 0 and available:
                # Use one available query
                available_query = -heapq.heappop(available)
                if available_query < i:
                    # No available
                    return -1
                heapq.heappush(active, available_query)
                num_needed -= 1
            
            if num_needed > 0:
                return -1
        
        return len(queries) - num_queries_used - len(active)
