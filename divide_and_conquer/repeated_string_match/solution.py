class Solution:
    def repeatedStringMatch(self, a: str, b: str) -> int:
        len_a = len(a)
        len_b = len(b)
        
        left = len_b // len_a + (1 if len_b % len_a else 0)
        right = left * 2

        o = float('inf')
        
        while left <= right:
            # Number of times we repeat for mid
            mid = (left + right) // 2

            if b in (a * mid):
                # It works
                o = min(o, mid)
                right = mid - 1
            else:
                left = mid + 1
        
        if o < float('inf'):
            return o
        return -1
                

