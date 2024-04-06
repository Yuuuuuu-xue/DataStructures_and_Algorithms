from typing import List

class Solution:
  def findDuplicates(self, nums: List[int]) -> List[int]:
    s = set()
    o = []
    for num in nums:
      if num in s:
        o.append(num)
      else:
        s.add(num)
    return o
