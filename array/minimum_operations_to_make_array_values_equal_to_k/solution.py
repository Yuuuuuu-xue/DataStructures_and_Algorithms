from typing import List

class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        seen = set()

        for num in nums:
            if num < k:
                return -1

            if num > k:
                seen.add(num)

        return len(seen)        
