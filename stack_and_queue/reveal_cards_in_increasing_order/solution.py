from typing import List
from collections import deque

class Solution:
    def deckRevealedIncreasing(self, deck: List[int]) -> List[int]:
        dq = deque()
        deck.sort(reverse=True)
        
        dq.append(deck[0])
        
        for i in range(1, len(deck)):
            # Pop the end and push to the front
            dq.appendleft(dq.pop())
            dq.appendleft(deck[i])

        return list(dq)  
