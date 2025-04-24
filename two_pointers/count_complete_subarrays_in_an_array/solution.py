from typing import List

class Solution:
    def countCompleteSubarrays(self, nums: List[int]) -> int:
        i = 0
        num_unique = len(set(nums))
        counter = {}

        o = 0
        
        for j in range(len(nums)):
            if nums[j] not in counter:
                counter[nums[j]] = 0
            counter[nums[j]] += 1

            # Move i until the window is minimized and subarray is complete
            while len(counter) == num_unique and counter[nums[i]] > 1:
                counter[nums[i]] -= 1
                i += 1
            
            # If subarray is complete
            if len(counter) == num_unique:
                # Then subarray from [0, ..., i] to j all are complete
                o += i + 1
        
        return o

