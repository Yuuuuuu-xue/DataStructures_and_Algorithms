from typing import List
from collections import defaultdict

class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        num_to_freq = defaultdict(int)
        for num in nums:
            num_to_freq[num] += 1

        freq_to_num = defaultdict(list)
        for num in num_to_freq:
            freq_to_num[num_to_freq[num]].append(num)
        
        freq_nums = []
        for freq in sorted(freq_to_num.keys()):
            for num in sorted(freq_to_num[freq], reverse=True):
                freq_nums.extend([num for _ in range(freq)])
        
        return freq_nums