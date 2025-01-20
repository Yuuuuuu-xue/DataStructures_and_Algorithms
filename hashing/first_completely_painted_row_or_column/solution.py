from typing import List
from collections import defaultdict

class Solution:
    def firstCompleteIndex(self, arr: List[int], mat: List[List[int]]) -> int:
        num_to_mat = {}
        n = len(mat)
        m = len(mat[0])

        for i in range(n):
            for j in range(m):
                num_to_mat[mat[i][j]] = (i, j)
        
        n1 = defaultdict(int)
        m1 = defaultdict(int)

        for i, num in enumerate(arr):
            mat_i, mat_j = num_to_mat[num]

            n1[mat_i] += 1
            # Same row, should check for column
            if n1[mat_i] == m:
                return i
            m1[mat_j] += 1
            if m1[mat_j] == n:
                return i

        return -1

