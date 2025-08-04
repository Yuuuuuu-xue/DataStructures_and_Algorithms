from typing import List

class Solution:
    def totalFruit(self, fruits: List[int]) -> int:
        window = {}
        o = 0
        i = 0

        for j in range(len(fruits)):
            if fruits[j] not in window:
                window[fruits[j]] = 0
            window[fruits[j]] += 1

            # Move window until window size is <= 2
            while len(window) > 2:
                window[fruits[i]] -= 1
                if window[fruits[i]] == 0:
                    del window[fruits[i]]
                i += 1
            
            o = max(o, sum(window.values()))
        
        return o


