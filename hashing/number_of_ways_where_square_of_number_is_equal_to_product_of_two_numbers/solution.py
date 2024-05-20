from typing import List
from collections import defaultdict

class Solution:
    def solve(self, nums1: List[int], nums2: List[int]) -> int:
        m = defaultdict(int)
        num_triplets = 0
        for num2 in nums2:
            for num1 in nums1:
                square = num1 * num1 
                if square % num2 != 0:
                    continue
                num_triplets += m[square / num2]
            m[num2] += 1
        return num_triplets

    def numTriplets(self, nums1: List[int], nums2: List[int]) -> int:
        return self.solve(nums1, nums2) + self.solve(nums2, nums1)
