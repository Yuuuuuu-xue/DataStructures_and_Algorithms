from typing import List

class Solution:
    def maxSatisfied(self, customers: List[int], grumpy: List[int], minutes: int) -> int:
        curr_sum = 0

        for i in range(len(customers)):
            if grumpy[i] == 0:
                curr_sum += customers[i]

        for i in range(minutes):
            if grumpy[i] == 1:
                curr_sum += customers[i]

        o = curr_sum  
        for i in range(1, len(customers) - minutes + 1):
            if grumpy[i - 1] == 1:
                curr_sum -= customers[i - 1]
            if grumpy[i + minutes - 1] == 1:
                curr_sum += customers[i + minutes - 1]
            o = max(o, curr_sum)

        return o      
