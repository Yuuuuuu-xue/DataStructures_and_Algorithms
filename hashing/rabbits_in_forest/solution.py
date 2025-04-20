from typing import List

class Solution:
    def numRabbits(self, answers: List[int]) -> int:
        m = {}
        o = 0

        for k in answers:
            if k not in m:
                o += k + 1
                if k > 0:
                    m[k] = k
                continue

            m[k] -= 1
            if m[k] == 0:
                del m[k]

        return o        
