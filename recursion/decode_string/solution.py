class Solution:
    def solve(self, s):
        o = ''
        # Starts with characters
        while self.i < len(s) and 'a' <= s[self.i] <= 'z':
            o += s[self.i]
            self.i += 1
        if o:
            return o

        curr_num = ''
        while self.i < len(s) and '0' <= s[self.i] <= '9':
            curr_num += s[self.i]
            self.i += 1
        # self.i is [
        self.i += 1
        curr = ''
        while self.i < len(s) and s[self.i] != ']':
            curr += self.solve(s)
        # self.i is ]
        self.i += 1
        
        return int(curr_num) * curr


    def decodeString(self, s: str) -> str:
        self.i = 0
        o = ''
        while self.i < len(s):
            o += self.solve(s)
        return o
