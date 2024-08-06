from collections import defaultdict

class Solution:
    def minimumPushes(self, word: str) -> int:
        m = defaultdict(int)
        for c in word:
            m[c] += 1
        
        freq_list = []
        for key in m:
            freq_list.append(m[key])
        
        freq_list.sort(reverse=True)

        num_pushes = 0

        for i, freq in enumerate(freq_list):
            num_pushes += (i // 8 + 1) * freq
        
        return num_pushes


