from typing import List

class Solution:
    def exclusiveTime(self, n: int, logs: List[str]) -> List[int]:
        o = [0] * n
        
        # Stores startTime 
        stack = []
        curr_time = 0

        for log in logs:
            lst = log.split(':')
            functionId = int(lst[0])
            op = lst[1]
            time = int(lst[2])

            if op == 'start':
                if stack:
                    stack[-1] += time - curr_time
                stack.append(0)
                curr_time = time
            else:
                duration = stack.pop()

                o[functionId] += time - curr_time + 1 + duration
   
                curr_time = time + 1
        return o
            
        
