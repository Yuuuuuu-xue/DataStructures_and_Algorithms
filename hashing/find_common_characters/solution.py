from typing import List
from collections import defaultdict

class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        m = defaultdict(int)
        for c in words[0]:
            m[c] += 1
        
        for i in range(1, len(words)):
            new_m = defaultdict(int)
            for c in words[i]:
                new_m[c] += 1
            
            for k in m:
                m[k] = min(m[k], new_m[k])
        
        common_chars = []
        for k in m:
            common_chars.extend([k for _ in range(m[k])])
        return common_chars
