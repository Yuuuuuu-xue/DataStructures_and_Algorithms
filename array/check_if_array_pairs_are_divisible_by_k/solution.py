from typing import List
from collections import defaultdict

class Solution:
    def canArrange(self, arr: List[int], k: int) -> bool:
        m = defaultdict(int)
        
        for num in arr:
            # Since num can be negative
            m[((num % k) + k) % k] += 1
        
        if m[0] % 2 != 0:
            return False
        for num in range(1, k // 2 + 1):
            if m[num] != m[k - num]:
                return False
        
        return True
            
