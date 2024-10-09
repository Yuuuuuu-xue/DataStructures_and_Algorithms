class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        o = 0
        num_open_brackets = 0

        for c in s:
            if c == '(':
                num_open_brackets += 1
            else:
                if num_open_brackets > 0:
                    num_open_brackets -= 1
                else:
                    o += 1
            
        return o + num_open_brackets
