from typing import List

class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        less = []
        large = []
        num_equal = 0

        for num in nums:
            if num < pivot:
                less.append(num)
            elif num > pivot:
                large.append(num)
            else:
                num_equal += 1
        
        return less + [pivot for _ in range(num_equal)] + large
