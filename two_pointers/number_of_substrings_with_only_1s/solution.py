class Solution:
    def numSub(self, s: str) -> int:
        i = 0
        o = 0

        while i < len(s):
            if s[i] == '0':
                i += 1
                continue

            # s[i] == 1
            j = i
            while j < len(s) and s[j] == '1':
                j += 1
                o += j - i
            
            i = j
        return o % (10**9 + 7)
