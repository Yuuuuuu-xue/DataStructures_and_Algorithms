from typing import List
import bisect

class Solution:
    def maxTaskAssign(self, tasks: List[int], workers: List[int], pills: int, strength: int) -> int:
        tasks.sort()
        workers.sort(reverse=True)

        o = 0
        left = 1
        right = len(tasks)

        while left <= right:
            mid = (left + right) // 2

            # Check if we can handle at least mid tasks
            num_pills = pills

            if mid > len(workers):
                # Does not work, not enough workers
                right = mid - 1
                continue
                
            enough_workers = True
            strongest_workers = workers[:mid][::-1]
    
            for k in range(mid):
                # Assign strongest worker to the kth weakest tasks
                i = bisect.bisect_left(strongest_workers, tasks[mid - k - 1])
                if i < len(strongest_workers):
                    strongest_workers.pop(i)                
                elif num_pills > 0:
                    # Try to find the weakest worker that takes the pill and can handle the task
                    # Since it's sorted, we can use binary search
                    i = bisect.bisect_left(strongest_workers, tasks[mid - k - 1] - strength)
                    if i < len(strongest_workers):
                        strongest_workers.pop(i)
                        num_pills -= 1
                    else:
                        # no such worker can handle current task
                        enough_workers = False
                        break
                else:
                    # Does not work, not enough workers
                    enough_workers = False
                    break
            
            if enough_workers:
                o = max(o, mid)
                left = mid + 1
            else:
                right = mid - 1
            

        return o

