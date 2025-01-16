from typing import List
from collections import defaultdict

class Solution:
    def xorAllNums(self, nums1: List[int], nums2: List[int]) -> int:
        m1 = defaultdict(int)
        for num in nums1:
            m1[num] += 1

        m2 = defaultdict(int)
        for num in nums2:
            m2[num] += 1
        
        o = 0
        n = len(nums1)
        m = len(nums2)

        for k in m1:
            if (m1[k] * m) % 2 != 0:
                o ^= k
        
        for k in m2:
            if (m2[k] * n) % 2 != 0:
                o ^= k
        
        return o
