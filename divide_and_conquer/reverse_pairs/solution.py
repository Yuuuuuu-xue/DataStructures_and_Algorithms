from typing import List

class Solution:
    def solve(self, nums: List[int]) -> int:
        if len(nums) < 2:
            return nums
        
        mid = len(nums) // 2
        sorted_left = self.solve(nums[:mid])
        sorted_right = self.solve(nums[mid:])

        i = 0
        j = 0
        # merge
        sorted_list = []

        while i < len(sorted_left) and j < len(sorted_right):
            if sorted_left[i] > 2 * sorted_right[j]:
                self.o += len(sorted_left) - i
                j += 1
            else:
                i += 1

        i = 0
        j = 0

        while i < len(sorted_left) and j < len(sorted_right):
            if sorted_left[i] <= sorted_right[j]:
                sorted_list.append(sorted_left[i])
                i += 1
            else:
                sorted_list.append(sorted_right[j])
                j += 1
        
        while i < len(sorted_left):
            sorted_list.append(sorted_left[i])
            i += 1
        while j < len(sorted_right):
            sorted_list.append(sorted_right[j])
            j += 1
        
        return sorted_list

    def reversePairs(self, nums: List[int]) -> int:
        self.o = 0
        self.solve(nums)
        return self.o
        
