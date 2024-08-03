from typing import List
from collections import defaultdict

class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        m = defaultdict(int)
        for num in target:
            m[num] += 1
        
        for num in arr:
            if m[num] == 0:
                return False
            m[num] -= 1
        
        for num in m:
            if m[num] > 0:
                return False
        
        return True
