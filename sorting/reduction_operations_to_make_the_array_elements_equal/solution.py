from typing import List

class Solution:
    def reductionOperations(self, nums: List[int]) -> int:
        nums.sort(reverse=True)
        o = 0
        curr_largest = 1

        for i in range(1, len(nums)):
            if nums[i] != nums[i - 1]:
                o += curr_largest
                curr_largest += 1
            else:
                curr_largest += 1

        return o
