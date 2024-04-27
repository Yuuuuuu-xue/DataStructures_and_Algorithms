from functools import lru_cache


class Solution:
    @lru_cache(maxsize=None)
    def solve(self, ring: str, key: str, i: int, j: int) -> int:
        if j >= len(key):
            return 0
        
        min_steps = float('inf')

        for x in range(len(ring)):
            # Same as key[j], when we rotate to this position
            if ring[x] == key[j]:
                # Find the min rotation either clockwise or counter clockwise
                delta = abs(x - i)
                min_rotation = min(delta, len(ring) - delta)

                # Possible steps rotate to the position and move to the next position
                min_steps = min(min_steps, min_rotation + self.solve(ring, key, x, j + 1))
        
        return min_steps

    def findRotateSteps(self, ring: str, key: str) -> int:
        # We need to add len(key) since when we need to rotate to the position and take one step to press the button
        return self.solve(ring, key, 0, 0) + len(key)
