from typing import List

class Solution:
    def minSubarray(self, nums: List[int], p: int) -> int:
        # If the array is nums[:j] which means the subarray nums[j:] is removed
        # Then, the min array size should be i + 1 = i - m[key] = i - (-1) = i + 1
        m = {0: -1}
        target = sum(nums) % p
        if target == 0:
            return target

        n = len(nums)
        curr = 0
        min_subarray_size = n

        for i, num in enumerate(nums):
            curr = (curr + num) % p
            if (curr - target) % p in m:
                min_subarray_size = min(min_subarray_size, i - m[(curr - target) % p])
            m[curr] = i
        
        if min_subarray_size == n:
            return -1
        return min_subarray_size
