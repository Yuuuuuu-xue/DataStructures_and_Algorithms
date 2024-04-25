class Solution:
    def longestIdealString(self, s: str, k: int) -> int:
        ascii_a = ord('a')
        ascii_z = ord('z')
        max_len = [0 for _ in range(26)]

        for c in s:
            ascii_c = ord(c)
            curr_len = 0
            for i in range(max(ascii_a, ascii_c - k), min(ascii_z, ascii_c + k) + 1):
                curr_len = max(curr_len, max_len[i - ascii_a])
            
            max_len[ascii_c - ascii_a] = curr_len + 1
        
        o = 0
        for item in max_len:
            o = max(o, item)
        return o
