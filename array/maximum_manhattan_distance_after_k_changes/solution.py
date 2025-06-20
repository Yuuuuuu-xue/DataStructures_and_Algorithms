class Solution:
    def maxDistance(self, s: str, k: int) -> int:
        directions = ["NE", "NW", "SE", "SW"]
        o = 0

        for d in directions:
            curr_k = k
            curr = 0
            for c in s:
                if c in d:
                    curr += 1
                elif curr_k > 0:
                    curr_k -= 1
                    curr += 1
                else:
                    curr -= 1
                o = max(o, curr)
        return o
