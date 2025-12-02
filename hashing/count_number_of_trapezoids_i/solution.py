from typing import List
from collections import defaultdict

class Solution:
    def countTrapezoids(self, points: List[List[int]]) -> int:
        m = defaultdict(int)

        for _, y in points:
            m[y] += 1

        o = 0
        num_horizontal_lines = 0

        for k in m:
            curr_horizontal_lines = m[k] * (m[k] - 1) // 2
            o += num_horizontal_lines * curr_horizontal_lines
            num_horizontal_lines += curr_horizontal_lines
        
        return o % (10 ** 9 + 7)
