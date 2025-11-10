from typing import List

class Solution:
    def minOperations(self, nums: List[int]) -> int:
        stack = []
        o = 0
        for num in nums:
            while stack and stack[-1] > num:
                stack.pop()
            
            if stack:
                if stack[-1] == num:
                    continue
                else:
                    stack.append(num)
                    # If num == 0, then stack will be empty
                    o += 1
            elif num != 0:
                stack.append(num)
                o += 1
        
        return o
                    
