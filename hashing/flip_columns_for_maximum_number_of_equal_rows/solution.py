from typing import List

class Solution:
    def maxEqualRowsAfterFlips(self, matrix: List[List[int]]) -> int:
        m = {}

        for row in matrix:
            p1 = ''
            p2 = ''

            for num in row:
                p1 += str(num)
                p2 += str(1 - num)

            if p1 not in m:
                m[p1] = 0
            if p2 not in m:
                m[p2] = 0

            m[p1] += 1
            m[p2] += 1
        
        o = 0
        for k in m:
            o = max(o, m[k])
        return o
