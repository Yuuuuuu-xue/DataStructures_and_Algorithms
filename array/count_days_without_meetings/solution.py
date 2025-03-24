from typing import List

class Solution:
    def countDays(self, days: int, meetings: List[List[int]]) -> int:
        meetings.sort()
        last_meeting_end_time = 0

        i = 0
        o = 0
        n = len(meetings)

        while i < n:
            start, end = meetings[i]
            # Loop over the meetings to find out the overlap
            while i + 1 < n and meetings[i + 1][0] <= end:
                end = max(end, meetings[i + 1][1])
                i += 1
            
            # If first meeting
            if last_meeting_end_time == 0:
                # Then number non meetings is start - 1
                o += start - 1
                # print(o, start, end)
                last_meeting_end_time = end
            else:
                # Take the diff
                o += start - last_meeting_end_time - 1
                last_meeting_end_time = end
                # print(o, start, end, last_meeting_end_time)
            
            i += 1

        if last_meeting_end_time >= days:
            return o

        return o + days - last_meeting_end_time
