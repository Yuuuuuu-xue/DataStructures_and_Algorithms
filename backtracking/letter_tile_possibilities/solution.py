class Solution:
    def solve(self, m, curr, s):
        for k in m.keys():
            if m[k] == 0:
                continue
            new_curr = curr + k

            # Search
            s.add(new_curr)
            m[k] -= 1
            self.solve(m, new_curr, s)

            # Backtrack
            m[k] += 1        

    def numTilePossibilities(self, tiles: str) -> int:
        m = {}
        s = set()

        for c in tiles:
            if c not in m:
                m[c] = 0
            m[c] += 1

        self.solve(m, "", s)
        return len(s)

        
