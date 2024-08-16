from typing import List

class Solution:
    def maxDistance(self, arrays: List[List[int]]) -> int:
        curr_min = arrays[0][0]
        curr_max = arrays[0][-1]
        max_diff = 0

        for i in range(1, len(arrays)):
            max_diff = max(max_diff, abs(arrays[i][0] - curr_max), abs(arrays[i][-1] - curr_min)) 
            curr_min = min(curr_min, arrays[i][0])
            curr_max = max(curr_max, arrays[i][-1])

        return max_diff       
