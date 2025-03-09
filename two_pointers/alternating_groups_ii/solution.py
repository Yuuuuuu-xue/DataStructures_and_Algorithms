from typing import List 
from collections import deque

class Solution:
    def numberOfAlternatingGroups(self, colors: List[int], k: int) -> int:
        i = 0
        window = deque()
        num_groups = 0
        n = len(colors)

        while i < n:
            if len(window) > 0:
                window.popleft()

            # Append elements until window has length k
            j = i + len(window)
            while len(window) < k:
                if len(window) > 0 and window[-1] == colors[j % n]:
                    # Same color
                    # print(i, j, window)
                    window = deque()
                    i = j
                    break

                # Append element
                window.append(colors[j % n])
                j += 1
            # print(i, window)
            
            # After the loop, if valid group, then window has the length of k
            if len(window) == k:
                num_groups += 1
                i += 1
        
        return num_groups
