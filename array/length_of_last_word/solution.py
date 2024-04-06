class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        j = -1
        i = len(s) - 1
        while i >= 0:
            if s[i] == ' ':
                if j == -1:
                    # Skip the ending spaces
                    i -= 1
                else:
                    # Reach to a word
                    return j - i
            else:
                if j == -1:
                    j = i
                # Non space
                i -= 1
        
        if j == -1:
            # All spaces 
            return 0
        return j + 1
