from typing import List
from collections import defaultdict

class Solution:
    def maxFrequency(self, nums: List[int], k: int, numOperations: int) -> int:
        m = defaultdict(int)
        nums.sort()
        
        for num in nums:
            m[num] += 1

        i = 0
        j = 0
        window_size = 0
        o = 0

        keys = sorted(m.keys())

        for idx in range(len(keys)):
            # Update j until not in the range
            while j < len(keys) and (abs(keys[idx] - keys[j]) <= k):
                window_size += m[keys[j]]
                j += 1

            # Update i until in the range
            while abs(keys[idx] - keys[i]) > k:
                window_size -= m[keys[i]]
                i += 1

            # Update the max solution that is bounded by numOperations
            # Note j will equal to k and hence, it includes m[keys[idx]] where it does not require numOperations
            o = max(o, min(window_size, numOperations + m[keys[idx]]))


        i = 0
        for j in range(len(nums)):
            # Find window where all can converge
            while nums[i] + k + k < nums[j]:
                i += 1
            o = max(o, min(j - i + 1, numOperations))

        return o
            
