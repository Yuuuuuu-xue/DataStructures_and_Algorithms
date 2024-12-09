from typing import List

class Solution:
    def isArraySpecial(self, nums: List[int], queries: List[List[int]]) -> List[bool]:
        prefix = [0]

        for i in range(1, len(nums)):
            curr = prefix[-1]
            if nums[i] % 2 == nums[i - 1] % 2:
                curr += 1
            prefix.append(curr)
        
        o = []
        for q in queries:
            if queries[q[1]] - queries[q[0]] > 0:
                o.append(False)
            else:
                o.append(True)
        
        return o

