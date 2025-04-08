from typing import List

class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        m = {}

        for num in nums:
            if num not in m:
                m[num] = 0
            m[num] += 1
        
        # Remove elements with 1 occurrence
        for num in list(m.keys()):
            if m[num] == 1:
                del m[num]
        
        o = 0
        i = 0
        while len(m) > 0 and i < len(nums):
            # Remove three elements
            k = 0
            while i < len(nums) and k < 3:
                if nums[i] in m:
                    if m[nums[i]] <= 2:
                        del m[nums[i]]
                    else:
                        m[nums[i]] -= 1
                i += 1
                k += 1
            # print(o, m)
            o += 1
        
        return o
