from typing import List

class Solution:
    # O(32) runtime
    def update_bits(self, bits: List[int], num: int, change: int):
        for i in range(32):
            # ith bit is 1
            if (num >> i) & 1:
                bits[i] += change

    def convert_bits_to_num(self, bits: List[int]):
        num = 0
        for i in range(32):
            if bits[i]:
                num |= 1 << i
        return num

    def minimumSubarrayLength(self, nums: List[int], k: int) -> int:
        n = len(nums)
        o = n + 1

        bits = [0 for i in range(32)]

        i = 0
        for j in range(n):
            # Include jth bit in the window
            self.update_bits(bits, nums[j], 1)
            
            while i <= j and self.convert_bits_to_num(bits) >= k:
                # Remove ith bit
                o = min(o, j - i + 1)
                self.update_bits(bits, nums[i], -1)
                i += 1
        
        if o == n + 1:
            return -1
        return o

