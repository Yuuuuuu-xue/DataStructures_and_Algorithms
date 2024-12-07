from typing import List
from math import ceil

class Solution:
    def solve(self, nums: List[int], max_operations: int, max_balls: int) -> bool:
        num_operations = 0
        for num in nums:
            num_operations += ceil(num / max_balls) - 1
            if num_operations > max_operations:
                return False
        return num_operations <= max_operations

    def minimumSize(self, nums: List[int], maxOperations: int) -> int:
        left = 1
        right = max(nums)
        o = right

        while left <= right:
            mid = (left + right) // 2
            print(mid, self.solve(nums, maxOperations, mid))
            
            if self.solve(nums, maxOperations, mid):
                # Works, move to the right
                o = min(o, mid)
                right = mid - 1
            else:
                left = mid + 1
        
        return o
