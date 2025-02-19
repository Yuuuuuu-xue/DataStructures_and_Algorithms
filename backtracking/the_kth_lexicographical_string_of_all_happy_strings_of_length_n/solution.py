class Solution:
    def solve(self, n: int, curr_list):
        if len(curr_list) == n:
            self.counter -= 1
            # Found kth
            if self.counter == 0:
                # We stop to search
                return True
            return False
        
        for c in ['a', 'b', 'c']:
            if not curr_list or curr_list[-1] != c:
                curr_list.append(c)
                if self.solve(n, curr_list):
                    return True
                # Backtrack
                curr_list.pop()    

    def getHappyString(self, n: int, k: int) -> str:
        self.counter = k
        curr_list = []

        if self.solve(n, curr_list):
            return ''.join(curr_list)
        return ''

