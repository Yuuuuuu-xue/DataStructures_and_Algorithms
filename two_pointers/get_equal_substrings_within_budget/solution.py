class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        left = 0
        n = len(s)
        max_len = 0
        curr_cost = 0
        for right in range(n):
            curr_cost += abs(ord(s[right]) - ord(t[right]))
            
            while curr_cost > maxCost:
                curr_cost -= abs(ord(s[left]) - ord(t[left]))
                left += 1
            
            max_len = max(max_len, right - left + 1)
        
        return max_len
