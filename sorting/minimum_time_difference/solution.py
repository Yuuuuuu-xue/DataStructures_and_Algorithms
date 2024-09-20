from typing import List

class Solution:
    def findMinDifference(self, timePoints: List[str]) -> int:
        def to_min(t_str: str):
            t = t_str.split(':')
            h = int(t[0])
            m = int(t[1])
            return h * 60 + m

        time_list = sorted([to_min(t) for t in timePoints])

        min_diff = float('inf')
        for i in range(1, len(time_list)):
            min_diff = min(min_diff, time_list[i] - time_list[i - 1])

        min_diff = min(min_diff, 24 * 60 - time_list[-1] + time_list[0])
        return min_diff
