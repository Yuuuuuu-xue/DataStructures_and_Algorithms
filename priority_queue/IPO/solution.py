from typing import List
import heapq

class Solution:
    def findMaximizedCapital(self, k: int, w: int, profits: List[int], capital: List[int]) -> int:
        n = len(profits)
        projects = [(capital[i], profits[i]) for i in range(n)]
        projects.sort()

        max_profits = []
        i = 0
        curr_capital = w

        for _ in range(k):
            while i < n and curr_capital >= projects[i][0]:
                heapq.heappush(max_profits, -projects[i][1])
                i += 1
            
            # If max_profits is empty, no project is available, we can return it
            if not max_profits:
                return curr_capital

            # Increase capital
            curr_capital += -max_profits[0]
            heapq.heappop(max_profits)
        
        return curr_capital
