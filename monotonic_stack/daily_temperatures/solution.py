from typing import List

class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        # In increasing order
        monotonic_stack = []
        o = []
        
        for i in range(len(temperatures) - 1, -1, -1):
            if not monotonic_stack:
                o.append(0)
                monotonic_stack.append((i, temperatures[i]))
            else:
                while monotonic_stack and monotonic_stack[-1][1] <= temperatures[i]:
                    monotonic_stack.pop()
                
                if monotonic_stack:
                    # Since we reverse hence monotonic_stack index has higher value
                    o.append(monotonic_stack[-1][0] - i)
                else:
                    o.append(0)
                monotonic_stack.append((i, temperatures[i]))
        
        return o[::-1]
