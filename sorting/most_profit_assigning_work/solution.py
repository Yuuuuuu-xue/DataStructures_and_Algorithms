from typing import List

class Solution:
    def maxProfitAssignment(self, difficulty: List[int], profit: List[int], worker: List[int]) -> int:
        n = len(difficulty)
        job = [(difficulty[i], profit[i]) for i in range(n)]
        job.sort()
        worker.sort()

        i = 0
        max_poss_profit = 0
        total_profit = 0

        for w in worker:
            # Update the possible job
            while i < n and job[i][0] <= w:
                max_poss_profit = max(max_poss_profit, job[i][1])
                i += 1
            
            # Update the profit
            total_profit += max_poss_profit
        
        return total_profit
            
