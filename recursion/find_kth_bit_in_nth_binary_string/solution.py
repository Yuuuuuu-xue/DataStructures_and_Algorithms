class Solution:
    def findKthBit(self, n: int, k: int) -> str:
        if n == 1:
            return '0'
        
        len = (1 << n) - 1
        mid = len // 2 + 1

        if k == mid:
            return '1'
        if k < mid:
            # first half, Sn-1
            return self.findKthBit(n - 1, k)
        if k > mid:
            # second half, reverse and inverse of Sn-1
            bit = self.findKthBit(n - 1, len - k + 1)
            # Reverse
            return '0' if bit == '1' else '1'
