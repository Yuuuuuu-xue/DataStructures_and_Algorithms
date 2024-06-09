from typing import List
from collections import defaultdict

class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        m = defaultdict(int)
        curr_sum = 0
        num_subarrays = 0

        for num in nums:
            curr_sum += num
            remainder = curr_sum % k
            if remainder == 0:
                num_subarrays += 1
            num_subarrays += m[remainder]
            m[remainder] += 1
        
        return num_subarrays
