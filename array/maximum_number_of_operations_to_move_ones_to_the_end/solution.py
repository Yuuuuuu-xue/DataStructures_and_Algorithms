class Solution:
    def maxOperations(self, s: str) -> int:
        o = 0

        curr_ones = 0

        i = 0
        n = len(s)

        while i < n:
            # Skip leading 0
            while i < n and s[i] == '0':
                i += 1
            
            if i >= n:
                break

            # Count the consecutive ones
            while i < n and s[i] == '1':
                curr_ones += 1
                i += 1
            
            # If i < n, then s[i] is 0
            if i < n:
                o += curr_ones
        
        return o
