from typing import List

class Solution:
    def count_bits(self, num: int) -> int:
        count = 0
        while num:
            count += num & 1
            num >>= 1
        return count

    def canSortArray(self, nums: List[int]) -> bool:
        num_bits = -1
        range_min = 0
        range_max = 0
        ranges = []

        for num in nums:
            if num_bits == -1:
                num_bits = self.count_bits(num)
                range_min = num
                range_max = num
            elif num_bits == self.count_bits(num):
                # Same bits, update the range
                range_min = min(range_min, num)
                range_max = max(range_max, num)
            else:
                # Different bits, push the range to a new array
                ranges.append((range_min, range_max))
                num_bits = self.count_bits(num)
                range_min = num
                range_max = num
        
        if num_bits != -1:
            ranges.append((range_min, range_max))
        
        # Loop over the ranges and check if they overlap
        for i in range(len(ranges) - 1):
            # If they overlap
            if ranges[i + 1][0] < ranges[i][1]:
                return False
        return True