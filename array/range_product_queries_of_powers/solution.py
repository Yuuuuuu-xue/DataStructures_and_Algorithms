from typing import List

class Solution:
    def productQueries(self, n: int, queries: List[List[int]]) -> List[int]:
        bin_n = bin(n)[2:]
        powers = []
        MOD = 10 ** 9 + 7

        for i in range(len(bin_n)):
            if bin_n[-i - 1] == '1':
                powers.append(2 ** i)
        
        # powers is already sorted
        prefix_power = []
        curr = 1

        for p in powers:
            curr *= p
            prefix_power.append(curr)

        o = []
        for left, right in queries:
            o.append((prefix_power[right] // prefix_power[max(0, left - 1)]) % MOD)
        return o

