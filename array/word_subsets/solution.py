from typing import List
from collections import defaultdict

class Solution:
    def wordSubsets(self, words1: List[str], words2: List[str]) -> List[str]:
        max_freq = defaultdict(int)

        for word in words2:
            m = defaultdict(int)
            
            for c in word:
                m[c] += 1
            
            for k in m: 
                max_freq[k] = max(max_freq[k], m[k])
        
        universal_words = []

        for word in words1:
            m = defaultdict(int)

            for c in word:
                m[c] += 1

            is_universal = True
            
            for k in max_freq:
                if m[k] < max_freq[k]:
                    is_universal = False
                    break
            
            if is_universal:
                universal_words.append(word)
            

        return universal_words
