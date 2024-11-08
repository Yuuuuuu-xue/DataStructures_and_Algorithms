from typing import List

class Solution:
    def getMaximumXor(self, nums: List[int], maximumBit: int) -> List[int]:
        max_xor = (1 << maximumBit) - 1

        curr_xor = 0
        for num in nums:
            curr_xor ^= num
        curr_xor ^= max_xor

        o = []
        for i in range(len(nums)):
            o.append(curr_xor)
            curr_xor ^= nums[-i - 1]
        return o
