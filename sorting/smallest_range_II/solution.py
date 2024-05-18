from typing import List

class Solution:
  def smallestRangeII(self, nums: List[int], k: int) -> int:
    nums.sort()
    smallest_range = nums[-1] - nums[0]
    for i in range(len(nums) - 1):
      max_ = max(nums[-1] - k, nums[i] + k)
      min_ = min(nums[0] + k, nums[i + 1] - k)
      smallest_range = min(smallest_range, max_ - min_)
    return smallest_range
