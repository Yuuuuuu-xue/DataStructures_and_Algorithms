from typing import List
from collections import defaultdict

import heapq

class Solution:
    def maximumRobots(self, chargeTimes: List[int], runningCosts: List[int], budget: int) -> int:
        max_heap = []
        m = defaultdict(int)
        curr_sum = 0
        i = 0
        max_num_robots = 0
        n = len(chargeTimes)

        for j in range(n):
            curr_sum += runningCosts[j]
            heapq.heappush(max_heap, -chargeTimes[j])

            # Remove i until the cost is <= budget
            while max_heap and i <= j and -max_heap[0] + ((j - i) + 1) * curr_sum > budget:
                curr_sum -= runningCosts[i]
                m[chargeTimes[i]] += 1
                i += 1

                # Remove from heap
                while max_heap and m[-max_heap[0]] > 0:
                    m[-max_heap[0]] -= 1
                    heapq.heappop(max_heap)
            
            # Update the window size
            max_num_robots = max(max_num_robots, (j - i) + 1)

        return max_num_robots
