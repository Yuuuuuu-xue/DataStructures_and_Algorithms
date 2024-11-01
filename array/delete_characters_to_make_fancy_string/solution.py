class Solution:
    def makeFancyString(self, s: str) -> str:
        if len(s) <= 2:
            return s
        o = s[0] + s[1]

        for i in range(2, len(s)):
            if s[i] != o[-1] or s[i] != o[-2]:
                o += s[i]
        return o
