from typing import List

class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        m = {}
        for i in range(len(matrix)):
            min_element = float('inf')
            min_j = -1

            for j in range(len(matrix[0])):
                if matrix[i][j] < min_element:
                    min_element = matrix[i][j]
                    min_j = j
            
            if min_j not in m:
                m[min_j] = set()
            
            m[min_j].add(i)
        
        lucky_numbers = []
        
        for j in range(len(matrix[0])):
            max_i = -1
            max_element = float('-inf')
            
            for i in range(len(matrix)):
                if matrix[i][j] > max_element:
                    max_element = matrix[i][j]
                    max_i = i
            
            if j in m and max_i in m[j]:
                lucky_numbers.append(matrix[max_i][j])
        
        return lucky_numbers