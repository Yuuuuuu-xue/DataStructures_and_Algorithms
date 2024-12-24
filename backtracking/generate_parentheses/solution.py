from typing import List

class Solution:
    def solve(self, num_left, num_right, curr_list):
        # Base case, we use all the parenthesis
        if num_left == 0 and num_right == 0:
            self.all_parenthesis.append(''.join(curr_list))
            return
        
        if num_left > 0:
            curr_list.append('(')
            self.solve(num_left - 1, num_right, curr_list)
            # Backtrack
            curr_list.pop()
        
        if num_right > 0 and num_left < num_right:
            # num_left needs to < num_right otherwise we will have something like )...(...)
            curr_list.append(')')
            self.solve(num_left, num_right - 1, curr_list)
            # Backtrack
            curr_list.pop()

    def generateParenthesis(self, n: int) -> List[str]:
        self.all_parenthesis = []
        self.solve(n, n, [])
        return self.all_parenthesis
