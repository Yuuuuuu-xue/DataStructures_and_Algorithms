from typing import List

class Solution:
    def findKDistantIndices(self, nums: List[int], key: int, k: int) -> List[int]:

        o = []
        curr = -1
        for i in range(len(nums)):
            # Keep increment curr until
            # nums[curr] == key
            # and abs(i - curr) <= k
            while curr == -1 or (curr < len(nums) and nums[curr] != key) or (abs(i - curr) > k and curr <= i):
                curr += 1
            print(i, curr)
            if curr < len(nums) and nums[curr] == key and abs(i - curr) <= k:
                o.append(i)
        
        return o
            


