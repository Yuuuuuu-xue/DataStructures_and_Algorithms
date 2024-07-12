class Solution:
    def remove_ab(self, s: str, x: int) -> str:
        num_b = 0
        num_a = 0
        
        for c in s:
            if c == 'a':
                num_a += 1
            else:
                if num_a == 0:
                    num_b += 1
                else:
                    num_a -= 1
                    self.max_points += x
        
        return 'b' * num_b + 'a' * num_a

    def remove_ba(self, s: str, y: int) -> str:
        num_b = 0
        num_a = 0
        
        for c in s:
            if c == 'b':
                num_b += 1
            else:
                if num_b == 0:
                    num_a += 1
                else:
                    num_b -= 1
                    self.max_points += y
        
        return 'a' * num_a + 'b' * num_b

    def maximumGain(self, s: str, x: int, y: int) -> int:
        self.max_points = 0
        i = 0

        while i < len(s):
            if s[i] != 'a' and s[i] != 'b':
                i += 1
                continue
            
            # a or b
            sub_s = ""
            while i < len(s) and (s[i] == 'a' or s[i] == 'b'):
                sub_s += s[i]
                i += 1
            
            if x >= y:
                replaced_sub_s = self.remove_ab(sub_s, x)
                self.remove_ba(replaced_sub_s, y)
            else:
                replaced_sub_s = self.remove_ba(sub_s, y)
                self.remove_ab(replaced_sub_s, x)
        
        return self.max_points
