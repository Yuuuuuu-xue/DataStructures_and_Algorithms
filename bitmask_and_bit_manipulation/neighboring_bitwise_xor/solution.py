from typing import List

class Solution:
    def doesValidArrayExist(self, derived: List[int]) -> bool:
        o = 0

        for num in derived:
            o ^= num
        
        return o == 0
