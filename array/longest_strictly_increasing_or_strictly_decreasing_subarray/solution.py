from typing import List

class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        o = 1
        curr = 1
        
        incr = None

        for i in range(len(nums) - 1):
            if nums[i] > nums[i + 1]:
                if incr is None:
                    curr += 1
                    incr = False
                elif not incr:
                    curr += 1
                else:
                    # decr, update counter
                    o = max(o, curr)
                    curr = 2
                    incr = False
            elif nums[i] < nums[i + 1]:
                if incr is None:
                    curr += 1
                    incr = True
                elif incr:
                    curr += 1
                else:
                    o = max(o, curr)
                    curr = 2
                    incr = True
            else:
                # == 
                o = max(o, curr)
                incr = None
                curr = 1
            # print(nums[i], i, curr, incr)
        return max(o, curr)
