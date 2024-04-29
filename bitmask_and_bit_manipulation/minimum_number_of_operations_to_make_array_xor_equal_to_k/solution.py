from typing import List

class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        xor_num = k
        for num in nums:
            xor_num ^= num

        num_operations = 0
        while xor_num > 0:
            if xor_num & 1 != 0:
                num_operations += 1
            xor_num >>= 1
        return num_operations

