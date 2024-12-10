from collections import defaultdict

class Solution:
    def solve(self, s: str, x: int) -> int:
        m = defaultdict(int)

        left = 0
        right = 0

        while right <= len(s):
            while right < len(s) and s[left] == s[right]:
                right += 1

            # (right - left) is the window size with same elements
            # (right - left) >= x, then (right - left) - x + 1 will be the number of special elements in this window
            if right - left >= x:
                m[s[left]] += right - left - x + 1
            
            if m[s[left]] >= 3:
                return True
            left = right
            right += 1
        
        return False

    def maximumLength(self, s: str) -> int:
        left = 1
        right = len(s)
        o = -1

        while left <= right:
            mid = (left + right) // 2
            if self.solve(s, mid):
                # works, we want to know right part is possible
                o = max(o, mid)
                left = mid + 1
            else:
                right = mid - 1
        
        return o
        
