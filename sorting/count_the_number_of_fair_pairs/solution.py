from typing import List

class Solution:
    def find_pairs_less_than_or_equal_to(self, nums: List[int], num: int) -> int:
        o = 0
        i = 0
        j = len(nums) - 1

        while i < j:
            if nums[i] + nums[j] > num:
                j -= 1
            else:
                o += j - i
                i += 1
        return o

    def countFairPairs(self, nums: List[int], lower: int, upper: int) -> int:
        nums.sort()
        return self.find_pairs_less_than_or_equal_to(nums, upper) - self.find_pairs_less_than_or_equal_to(nums, lower - 1)
