from typing import List
from collections import defaultdict

class Solution:
    def numEquivDominoPairs(self, dominoes: List[List[int]]) -> int:
        m = defaultdict(int)

        for top, bottom in dominoes:
            if top > bottom:
                top, bottom = bottom, top
            m[(top, bottom)] += 1
        
        o = 0
        for key in m:
            o += (m[key] * (m[key] - 1)) // 2
    
        return o
