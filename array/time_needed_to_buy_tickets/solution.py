from typing import List

class Solution:
    def timeRequiredToBuy(self, tickets: List[int], k: int) -> int:
        time_required = 0
        for i in range(len(tickets)):
            if i <= k:
                time_required += min(tickets[i], tickets[k])
            else:
                time_required += min(tickets[i], tickets[k] - 1)
        return time_required
