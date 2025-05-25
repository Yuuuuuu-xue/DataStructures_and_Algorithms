from typing import List
from collections import defaultdict

class Solution:
    def longestPalindrome(self, words: List[str]) -> int:
        m = defaultdict(int)

        for word in words:
            m[word] += 1
        
        o = 0
        use_one_middle = False

        keys = list(m.keys())

        for key in keys:
            if m[key] == 0:
                continue
            if key[0] == key[1]:
                # Same character i.e. "aa"
                if m[key] % 2 != 0:
                    # We add one word to the middle
                    if not use_one_middle:
                        o += 2
                        use_one_middle = True
                    # -1 to make it even
                    o += (m[key] - 1) * 2
                else:
                    # Even number
                    o += m[key] * 2
                m[key] = 0
            else:
                # Diff key
                min_count = min(m[key], m[key[1] + key[0]])
                # Since 2 words where each word has a length of 2
                o += min_count * 2 * 2
                m[key] = 0
                m[key[1] + key[0]] = 0
        
        return o

