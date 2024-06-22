from typing import List

class Solution:
  def solve(self, nums: List[int], k: int) -> int:
    left = 0
    num_subarrays_at_most_k = 0
    for right in range(len(nums)):
      if nums[right] % 2 != 0:
        k -= 1
      
      # Increment to keep exactly k
      while k < 0:
        if nums[left] % 2 != 0:
          k += 1
        left += 1
      
      num_subarrays_at_most_k += right - left + 1
    
    return num_subarrays_at_most_k
      


  def numberOfSubarrays(self, nums: List[int], k: int) -> int:
    return self.solve(nums, k) - self.solve(nums, k - 1)
