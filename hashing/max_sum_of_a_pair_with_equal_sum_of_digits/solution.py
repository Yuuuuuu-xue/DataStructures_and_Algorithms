from typing import List

class Solution:
    def maximumSum(self, nums: List[int]) -> int:
        m = {}
        o = -1

        for num in nums:
            num_sum = 0
            curr_num = num
            while curr_num > 0:
                num_sum += curr_num % 10
                curr_num //= 10
                        
            if num_sum in m:
                o = max(o, m[num_sum] + num)
                m[num_sum] = max(m[num_sum], num)
            else:
                m[num_sum] = num
        
        return o

