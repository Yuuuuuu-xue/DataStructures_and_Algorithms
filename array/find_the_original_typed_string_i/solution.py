class Solution:
    def possibleStringCount(self, word: str) -> int:
        curr_c = word[0]
        count = 1
        o = 0

        for i in range(1, len(word)):
            if word[i] != curr_c:
                if count > 1:
                    o += count - 1
                curr_c = word[i]
                count = 1
            else:
                count += 1
        
        if count > 1:
            o += count - 1
        return o + 1
