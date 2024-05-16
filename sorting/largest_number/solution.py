from typing import List 
from functools import cmp_to_key

class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        nums_str = [str(num) for num in nums]

        def compare(x, y):
            # -1 so x + y >= y + x, then x comes before y
            return -1 if x + y >= y + x else 1
    
        nums_str.sort(key=cmp_to_key(compare))
        o = ""
        for num_str in nums_str:
            o += num_str
        for i in range(len(o) - 1):
            if  o[i] != '0':
                return o[i:]
        return o


