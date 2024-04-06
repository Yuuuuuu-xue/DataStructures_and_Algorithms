class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        seen = set()
        m = {}
        for i in range(len(s)):
            if s[i] not in m:
                if t[i] in seen:
                    return False
                seen.add(t[i])
                m[s[i]] = t[i]
            elif m[s[i]] != t[i]:
                return False
        return True
