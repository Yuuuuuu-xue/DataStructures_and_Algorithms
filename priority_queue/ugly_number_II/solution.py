import heapq

class Solution:
    def nthUglyNumber(self, n: int) -> int:
        min_heap = [1]
        seen = set()
        
        while n > 1:
            curr_ugly = heapq.heappop(min_heap)
            for num in [2, 3, 5]:
                if curr_ugly * num not in seen:
                    seen.add(curr_ugly * num)
                    heapq.heappush(min_heap, curr_ugly * num)
            n -= 1
        
        return min_heap[0]
