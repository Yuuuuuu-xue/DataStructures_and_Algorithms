from typing import List

class Solution:
    def addSpaces(self, s: str, spaces: List[int]) -> str:
        o = ''
        j = 0

        for i in range(len(s)):
            if j >= len(spaces):
                o += s[i]
            elif i == spaces[j]:
                # Same index, add space and then character
                o += ' ' + s[i]
                j += 1
            else:
                o += s[i]
        
        return o
