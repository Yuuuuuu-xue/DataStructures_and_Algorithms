from typing import List
from collections import defaultdict

class Solution:
    def specialTriplets(self, nums: List[int]) -> int:
        right_map = defaultdict(int)

        for num in nums:
            right_map[num] += 1

        left_map = defaultdict(int)

        o = 0

        for num in nums:
            right_map[num] -= 1
            o += left_map[2 * num] * right_map[2 * num]
            left_map[num] += 1
            
        return o % (10 ** 9 + 7)
