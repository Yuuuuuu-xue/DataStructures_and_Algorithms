from typing import List

class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        prefix_sum = []
        curr_sum = 0
        m = {}

        for i in range(len(nums)):
            if i > 0 and nums[i] == 0 and nums[i - 1] == 0:
                return True
            curr_sum += nums[i]
            prefix_sum.append(curr_sum)
        
        if curr_sum % k == 0 and len(nums) > 1:
            return True

        for j in range(len(nums)):
            # 0..j inclusive
            prefix_j = prefix_sum[j]
            rem = prefix_j % k
            
            # Subarray 0 to j
            if rem == 0 and j > 0:
                return True

            # j - m[rem] > 1 to guarantee at least 2 elements
            if rem in m and j - m[rem] > 1:
                sum = prefix_j - prefix_sum[m[rem]]
                # Guarantee the sum is mod by k, solve case i.e. [3, 0]
                if sum > 0 and sum % k == 0:
                    # print(prefix_j, prefix_sum[m[rem]], rem, m[rem], sum)
                    return True

            # We want to track smallest i possible to guarantee at least 2 elements
            if rem not in m:
                m[rem] = j
            
            # print(j, nums[j], m, prefix_j)

        return False