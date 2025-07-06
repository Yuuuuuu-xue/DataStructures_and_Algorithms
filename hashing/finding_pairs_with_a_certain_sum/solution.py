from typing import List
from collections import defaultdict

class FindSumPairs:

    def __init__(self, nums1: List[int], nums2: List[int]):
        self.m1 = defaultdict(int)
        for num in nums1:
            self.m1[num] += 1
        self.m2 = defaultdict(int)
        self.nums2 = nums2
        for num in self.nums2: 
            self.m2[num] += 1

    def add(self, index: int, val: int) -> None:
        self.m2[self.nums2[index]] -= 1
        self.nums2[index] += val
        self.m2[self.nums2[index]] += 1

    def count(self, tot: int) -> int:
        o = 0
        for k in self.m1:
            if k <= tot:
                o += self.m1[k] * self.m2[tot - k]
        return o


# Your FindSumPairs object will be instantiated and called as such:
# obj = FindSumPairs(nums1, nums2)
# obj.add(index,val)
# param_2 = obj.count(tot)
