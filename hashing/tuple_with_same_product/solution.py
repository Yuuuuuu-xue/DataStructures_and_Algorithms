from typing import List
from collections import defaultdict

class Solution:
    def tupleSameProduct(self, nums: List[int]) -> int:
        m = defaultdict(int)

        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                m[nums[i] * nums[j]] += 1
        
        o = 0
        for k in m:
            if m[k] >= 2:
                o += m[k] * (m[k] - 1) // 2
        
        return o * 8
             
