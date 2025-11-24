from typing import List

class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()

        o = []
        left, right = intervals[0]       

        for i in range(1, len(intervals)):
            # If we can merge, so they overlap
            new_left, new_right = intervals[i]

            if right >= new_left:
                # Overlap
                right = max(right, new_right)
            else:
                # Non-overlap
                o.append([left, right])
                left, right = new_left, new_right
        
        o.append([left, right])
        return o
