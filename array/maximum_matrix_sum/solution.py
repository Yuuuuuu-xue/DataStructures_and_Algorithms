from typing import List

class Solution:
    def maxMatrixSum(self, matrix: List[List[int]]) -> int:
        matrix_sum = 0
        min_abs = float('inf')
        num_negative = 0

        for row in matrix:
            for num in row:
                matrix_sum += abs(num)
                if num < 0:
                    num_negative += 1
                min_abs = min(min_abs, abs(num))
        
        if num_negative % 2 == 0:
            return matrix_sum
        
        # Since we already add min_abs to matrix_sum, need to exclude it and subtract it, thus 2 * it
        return matrix_sum - 2 * min_abs
