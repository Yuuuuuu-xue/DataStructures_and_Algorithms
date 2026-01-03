from typing import List

class Solution:
    def solve(self, s: str, curr: List[str], i: int):
        if i >= len(s):
            if len(curr) == 4:
                self.o.append('.'.join(curr))
                return
        if len(curr) > 4:
            return
        
        curr_str = ''
        for j in range(i, min(i + 3, len(s))):
            curr_str += s[j]

            # If we start with 0 then we cannot try to append other numbers
            if curr_str[0] == '0' and len(curr_str) > 1:
                break
            # The value needs to be less than 255
            if int(curr_str) > 255:
                break

            curr.append(curr_str)
            self.solve(s, curr, j + 1)
            # Backtrack
            curr.pop()


    def restoreIpAddresses(self, s: str) -> List[str]:
        self.o = []
        self.solve(s, [], 0)
        return self.o
