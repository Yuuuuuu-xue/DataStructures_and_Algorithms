from collections import defaultdict

class Solution:
    def longestPalindrome(self, s: str) -> int:
        m = defaultdict(int)
        for c in s:
            m[c] += 1
        
        palindrome_len = 0
        has_odd = False
        for k in m:
            if m[k] % 2 == 0:
                palindrome_len += m[k]
            else:
                palindrome_len += m[k] - 1
                has_odd = True
        
        if has_odd:
            palindrome_len += 1
        return palindrome_len
