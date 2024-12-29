from typing import List
from functools import lru_cache
from collections import defaultdict

class Solution:
    @lru_cache
    def dp(self, i: int, k: int):
        if i >= len(self.target):
            # We have target, return 1
            return 1
        if k >= len(self.frequency_map):
            # Use all the words but no target formed, return 0
            return 0
        if self.m - k < len(self.target) - i:
            # Not enough index
            return 0
        
        o = 0
        
        if self.frequency_map[k][self.target[i]] > 0:
            o += (self.frequency_map[k][self.target[i]] * self.dp(i + 1, k + 1)) % self.MOD

        o += self.dp(i, k + 1) % self.MOD
        return o % self.MOD

    def numWays(self, words: List[str], target: str) -> int:
        self.MOD = 10 ** 9 + 7
        self.target = target
        self.m = len(words[0])

        # Build the frequency map
        self.frequency_map = []
        for _ in range(len(words[0])):
            self.frequency_map.append(defaultdict(int))
        
        for w in words:
            for i in range(len(words[0])):
                self.frequency_map[i][w[i]] += 1
                
        return self.dp(0, 0)

