class Solution:
    def appendCharacters(self, s: str, t: str) -> int:
        i_t = 0
        m = len(t)
        for i_s in range(len(s)):
            if i_t >= m:
                return 0
            if s[i_s] == t[i_t]:
                i_t += 1
        
        return m - i_t
