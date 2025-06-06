class Solution:
    def robotWithString(self, s: str) -> str:
        m = {}
        for i in range(len(s) - 1, -1, -1):
            if s[i] not in m:
                m[s[i]] = i
        
        o = ""
        i = 0
        t = []
        for c_i in range(26):
            c = chr(c_i + ord('a'))

            if c not in m:
                continue

            while t and t[-1] <= c:
                o += t.pop()

            while i < len(s) and i <= m[c]:
                # Need to append it to t
                t.append(s[i])
                i += 1

                while t and t[-1] <= c:
                    o += t.pop()
        
        while t:
            o += t.pop()
        return o

