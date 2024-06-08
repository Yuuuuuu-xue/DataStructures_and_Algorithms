from typing import List

class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        m = {}
        m[0] = -1

        curr_sum = 0
        for i in range(len(nums)):
            curr_sum += nums[i]
            
            remainder = curr_sum % k
            if remainder in m:
                if i - m[remainder] > 1:
                    return True
            else:
                m[remainder] = i

        return False
