from typing import List
from functools import lru_cache

class Solution:
    @lru_cache(maxsize=None)
    def is_palindrome(self, s: str, i: int, j: int) -> bool:
        if j - i + 1 <= 1:
            return True
        return s[i] == s[j] and self.is_palindrome(s, i + 1, j - 1)

    def solve(self, s: str, i: int, curr_list: List[int]):
        if i >= len(s):
            self.palindrome_list.append(curr_list[::])
            return

        for end in range(i + 1, len(s) + 1):
            # s[i:end] will be the palindrome and join the rest
            if self.is_palindrome(s, i, end - 1): # -1 since 0-index based
                curr_list.append(s[i:end])
                
                self.solve(s, end, curr_list)

                # Backtracking
                curr_list.pop()

    def partition(self, s: str) -> List[List[str]]:
        self.palindrome_list = []
        curr_list = []
        self.solve(s, 0, curr_list)
        return self.palindrome_list
