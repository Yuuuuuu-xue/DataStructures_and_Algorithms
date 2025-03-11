class Solution:
    def numberOfSubstrings(self, s: str) -> int:
        window = [0, 0, 0]
        n = len(s)
        left = 0
        o = 0
        ord_a = ord('a')

        for right in range(n):
            i = ord(s[right]) - ord_a
            window[i] += 1

            while window[0] > 0 and window[1] > 0 and window[2] > 0:
                # Valid window
                o += n - right
                # Move left
                i = ord(s[left]) - ord_a
                window[i] -= 1
                left += 1

        return o
