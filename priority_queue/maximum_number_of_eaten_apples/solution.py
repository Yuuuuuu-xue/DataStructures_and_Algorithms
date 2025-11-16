from typing import List
import heapq

class Solution:
    def eatenApples(self, apples: List[int], days: List[int]) -> int:
        pq = []

        o = 0
        i = 0
        for i in range(len(apples)):
            num_apples = apples[i]
            rotten = i + days[i]

            # Remove all the rotten apples
            while pq and pq[0][0] <= i:
                heapq.heappop(pq)

            if pq:
                if days[i] == 0 or pq[0][0] < rotten:
                    # We will eat one apple from prev date and push back all apples in curr date to the queue
                    prev_rotten, prev_num_apples = heapq.heappop(pq)
                    if prev_num_apples - 1 > 0:
                        heapq.heappush(pq, (prev_rotten, prev_num_apples - 1))
                    o += 1
                    if num_apples > 0:
                        heapq.heappush(pq, (rotten, num_apples))
                else:
                    # Eat one apple from today and push back to heap
                    if num_apples > 0:
                        o += 1
                        if num_apples - 1 > 0:
                            heapq.heappush(pq, (rotten, num_apples - 1))
            else:
                if num_apples > 0:
                    o += 1
                    if num_apples - 1 > 0:
                        heapq.heappush(pq, (rotten, num_apples - 1))

        # Now all left apples are in the queue and days is at len(apples).
        # All apples are available and hence we can finish the earliest possible
        curr_date = len(apples)

        while pq:
            rotten, num_apples = heapq.heappop(pq)
            num_days_left = rotten - curr_date

            if num_apples <= num_days_left:
                # We can finish all apples
                o += num_apples
                curr_date += num_apples
            else:
                # We cannot finish all apples
                o += num_days_left
                curr_date += num_days_left
        
        return o

