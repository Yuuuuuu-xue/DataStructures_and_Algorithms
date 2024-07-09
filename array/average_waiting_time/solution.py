from typing import List

class Solution:
    def averageWaitingTime(self, customers: List[List[int]]) -> float:
        curr_time = 1
        total_waiting_time = 0

        for arrival, wait in customers:
            # Wait until chef finishes prev order
            total_waiting_time += max(0, curr_time - arrival)
            # Wait chef to finishes curr order
            curr_time = max(curr_time, arrival)
            curr_time += wait
            total_waiting_time += wait
        
        return total_waiting_time / len(customers)

