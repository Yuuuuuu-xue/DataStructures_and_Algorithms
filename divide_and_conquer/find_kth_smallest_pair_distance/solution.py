from typing import List

class Solution:
    def has_at_least_k_pairs(self, nums: List[int], k: int, x: int) -> bool:
        num_pairs = 0
        left = 0
        for right in range(1, len(nums)):
            while nums[right] - nums[left] > x:
                left += 1
            num_pairs += right - left
            if num_pairs >= k:
                return True
        return False

    def smallestDistancePair(self, nums: List[int], k: int) -> int:
        nums.sort()

        left = 0
        right = nums[-1] - nums[0] 

        while left < right:
            mid = (left + right) // 2
            if self.has_at_least_k_pairs(nums, k, mid):
                # right can be the possible solution
                right = mid
            else:
                left = mid + 1
        return left
