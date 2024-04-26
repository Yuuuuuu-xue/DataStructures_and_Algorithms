from typing import List

class Solution:
    def minFallingPathSum(self, grid: List[List[int]]) -> int:
        smallest = 0
        second_smallest = 0
        smallest_i = -1

        for row in grid:
            next_smallest = float('inf')
            next_second_smallest = float('inf')
            next_smallest_i = -1
            for i in range(len(row)):
                prev_smallest = second_smallest if i == smallest_i else smallest

                if prev_smallest + row[i] < next_smallest:
                    next_second_smallest = next_smallest
                    next_smallest = prev_smallest + row[i]
                    next_smallest_i = i
                else:
                    next_second_smallest = min(next_second_smallest, prev_smallest + row[i])
                
            smallest = next_smallest
            second_smallest = next_second_smallest
            smallest_i = next_smallest_i
        
        return smallest
