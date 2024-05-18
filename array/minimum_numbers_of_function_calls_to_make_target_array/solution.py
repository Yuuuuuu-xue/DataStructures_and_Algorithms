from typing import List
import math

class Solution:
  def minOperations(self, nums: List[int]) -> int:
    num_operations = 0
    max_even_operations = 0
    for num in nums:
      curr_even_operations = 0
      while num != 0:
        if num % 2 != 0:
          num -= 1
          num_operations += 1
        else:
          num /= 2
          curr_even_operations += 1
      max_even_operations = max(max_even_operations, curr_even_operations)
    return num_operations + max_even_operations