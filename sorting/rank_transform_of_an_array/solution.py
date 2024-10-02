from typing import List

class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        sorted_arr = sorted(set(arr))
        m = {}
        for i, item in enumerate(sorted_arr):
            m[item] = i + 1

        for i, item in enumerate(arr): 
            arr[i] = m[item]
        
        return arr
