from typing import List

class Solution:
    def minSubarray(self, nums: List[int], p: int) -> int:
        o = len(nums) + 1

        prefix_sum = []
        curr_sum = 0
        for num in nums:
            curr_sum += num
            prefix_sum.append(curr_sum)
        
        if curr_sum % p == 0:
            return 0

        if curr_sum < p:
            return -1
        
        m = {}
        for j in range(len(nums)):
            # If just index j
            if (curr_sum - nums[j]) % p == 0:
                return 1
            # If in the map
            sum_to_j = prefix_sum[j]
            rem = (curr_sum - sum_to_j) % p
            if rem == 0:
                # remove subarray from 0 to j
                o = min(o, j + 1)
            
            if p - rem in m:
                # remove subarray form m[p-rem] to j
                o = min(o, j - m[p - rem])
            
            if sum_to_j % p == 0:
                m[0] = j
                m[p] = j
            else:
                m[sum_to_j % p] = j
        
        if o >= len(nums):
            return -1
        return o



