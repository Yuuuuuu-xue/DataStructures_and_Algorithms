from typing import List

class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        nums.sort()
        for i in range(len(nums) - 1):
            if not nums[i] ^ nums[i + 1]:
                return nums[i]
        return -1
