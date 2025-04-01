from typing import List
from functools import lru_cache

class Solution:
    @lru_cache(maxsize=None)
    def solve(self, i) -> int:
        if i >= len(self.questions):
            return 0
        return max(
            # Take the question
            self.questions[i][0] + self.solve(i + self.questions[i][1] + 1),
            # Skip the question
            self.solve(i + 1)
        )

    def mostPoints(self, questions: List[List[int]]) -> int:
        self.questions = questions
        return self.solve(0)
