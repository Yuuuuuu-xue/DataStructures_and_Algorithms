from typing import List
from collections import defaultdict

class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        m = defaultdict(int)
        for num in arr1:
            m[num] += 1
        
        sorted_arr1 = []

        for num in arr2:
            sorted_arr1.extend([num for _ in range(m[num])])
            if num in m:
                del m[num]
        
        for num in sorted(m.keys()):
            sorted_arr1.extend([num for _ in range(m[num])])
        
        return sorted_arr1

