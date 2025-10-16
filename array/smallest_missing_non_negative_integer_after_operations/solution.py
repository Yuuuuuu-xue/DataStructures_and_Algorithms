from typing import List

class Solution:
    def findSmallestInteger(self, nums: List[int], value: int) -> int:
        freq = [0 for _ in range(value)]
        
        for num in nums:
            freq[num % value] += 1

        min_freq = freq[0]
        min_num = 0
        for i in range(value):
            if freq[i] < min_freq:
                min_freq = freq[i]
                min_num = i
        
        return min_freq * value + min_num