from functools import lru_cache

class Solution:
    MOD = 10 ** 9 + 7

    @lru_cache
    def solve(self, n: int) -> int:
        # Return any length == n

        o = 0

        if n == self.zero:
            o += 1
        elif n > self.zero:
            o += self.solve(n - self.zero)
        
        if n == self.one:
            o += 1
        elif n > self.one:
            o += self.solve(n - self.one)

        return o % Solution.MOD

    def countGoodStrings(self, low: int, high: int, zero: int, one: int) -> int:
        self.zero = zero
        self.one = one

        o = 0
        for i in range(low, high + 1):
            o += self.solve(i)
        
        return o % Solution.MOD
