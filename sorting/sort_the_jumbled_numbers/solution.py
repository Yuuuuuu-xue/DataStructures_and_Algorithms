from typing import List

class Solution:
    def sortJumbled(self, mapping: List[int], nums: List[int]) -> List[int]:
        new_nums = []
        for i, num in enumerate(nums):
            new_num = ''
            for c in str(num):
                int_c = int(c)
                new_num += chr(mapping[int_c] + 48)
            # Use i as second element since if same new_num and sort by its relative order
            new_nums.append((int(new_num), i, num))
        
        new_nums.sort()

        return [num[2] for num in new_nums]

