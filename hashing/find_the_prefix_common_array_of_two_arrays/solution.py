from typing import List
from collections import defaultdict

class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        m = defaultdict(int)

        o = []

        for i in range(len(A)):
            curr = 0

            m[A[i]] += 1
            if m[A[i]] == 2:
                curr += 1
            
            m[B[i]] += 1
            if m[B[i]] == 2:
                curr += 1
            
            if len(o) > 0:
                curr += o[-1]
            
            o.append(curr)

        return o
