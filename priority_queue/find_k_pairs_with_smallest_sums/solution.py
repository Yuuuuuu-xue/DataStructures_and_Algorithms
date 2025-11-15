from typing import List
import heapq

class Solution:
    def kSmallestPairs(self, nums1: List[int], nums2: List[int], k: int) -> List[List[int]]:
        pq = [(nums1[0] + nums2[0], 0, 0)]
        n = len(nums1)
        m = len(nums2)
        
        o = []
        seen = set()
        seen.add((0, 0))

        for _ in range(k):
            _, i, j = heapq.heappop(pq)
            
            o.append([nums1[i], nums2[j]])

            if i + 1 < n and (i + 1, j) not in seen:
                heapq.heappush(pq, (nums1[i + 1] + nums2[j], i + 1, j))
                seen.add((i + 1, j))
            if j + 1 < m and (i, j + 1) not in seen:
                heapq.heappush(pq, (nums1[i] + nums2[j + 1], i, j + 1))
                seen.add((i, j + 1))
        return o            

