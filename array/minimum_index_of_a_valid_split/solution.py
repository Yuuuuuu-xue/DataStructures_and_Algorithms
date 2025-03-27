from typing import List

class Solution:
    def minimumIndex(self, nums: List[int]) -> int:
        n = len(nums)
        count = 0
        dominant_element = 0

        for num in nums:
            if count == 0:
                count = 1
                dominant_element = num
            elif dominant_element == num:
                count += 1
            else: 
                count -= 1
        
        max_freq = 0
        for num in nums:
            if num == dominant_element:
                max_freq += 1
        
        num_dominant_element_left = 0
        for i in range(n):
            if nums[i] == dominant_element:
                num_dominant_element_left += 1

            # If it is dominant in left and right
            # print(max_freq, num_dominant_element_left, i)
            if num_dominant_element_left * 2 > (i + 1) and (max_freq - num_dominant_element_left) * 2 > (n - i - 1):
                return i
        return -1
