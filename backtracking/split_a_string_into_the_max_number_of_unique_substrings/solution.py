class Solution:
    def solve(self, s: str, i, seen) -> int:
        n = len(s)
        if i >= n:
            return 0

        max_unique_len = -1

        for len_ in range(1, n - i + 1):
            sub_s = s[i:i+len_]
            # Already seen, not valid
            if sub_s in seen:
                continue

            seen.add(sub_s)
            unique_len = self.solve(s, i + len_, seen)

            if unique_len >= 0:
                max_unique_len = max(max_unique_len, 1 + unique_len)
            
            # Backtrack
            seen.remove(sub_s)
        
        return max_unique_len

    def maxUniqueSplit(self, s: str) -> int:
        return self.solve(s, 0, set())
