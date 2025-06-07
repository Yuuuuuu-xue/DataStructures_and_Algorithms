import heapq

class Solution:
    def clearStars(self, s: str) -> str:
        pq = []

        for i, c in enumerate(s):
            if c == '*':
                heapq.heappop(pq)
            else:
                heapq.heappush(pq, (c, -i))
        
        pq.sort(key=lambda x : -x[1])
        return "".join([item[0] for item in pq])
        