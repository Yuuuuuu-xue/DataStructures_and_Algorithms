from typing import List

class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        vowels = { 'a', 'e', 'i', 'o', 'u' }
        dp = [0]

        for word in words:
            dp.append(dp[-1])
            if word[0] in vowels and word[-1] in vowels:
                dp[-1] += 1
        
        o = []
        for q in queries:
            i = q[0] + 1
            j = q[1] + 1
            o.append(dp[j] - dp[i - 1])

        return o
