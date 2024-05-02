from typing import List

class Solution:
  def findMaxK(self, nums: List[int]) -> int:
    s = set()
    o = 0
    for num in nums:
      if -num in s:
        o = max(o, abs(num))
      else:          
        s.add(num)
    
    if o == 0:
      return -1
    return o
