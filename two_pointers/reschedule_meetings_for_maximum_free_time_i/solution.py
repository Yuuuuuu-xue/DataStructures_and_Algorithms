from typing import List

class Solution:
    def maxFreeTime(self, eventTime: int, k: int, startTime: List[int], endTime: List[int]) -> int:
        start_with_i = sorted([(startTime[i], i) for i in range(len(startTime))])
        left = 0
        o = 0
        # total time in the window
        total_time = 0
        for right in range(len(startTime)):
            meeting_start_i = 0
            start, i = start_with_i[right]
            total_time += endTime[i] - start
            
            # Window is max
            if right - left + 1 > k:
                meeting_start_i = left
                total_time -= endTime[start_with_i[left][1]] - start_with_i[left][0]
                left += 1

            meetings_finish = total_time
            if left > 0:
                meetings_finish = endTime[start_with_i[meeting_start_i][1]] + total_time

            if right == len(startTime) - 1:
                # Last meetings, we can simply
                o = max(o, eventTime - meetings_finish)
            else:
                # Next possible meetings
                o = max(o, startTime[i + 1] - meetings_finish)
        return o