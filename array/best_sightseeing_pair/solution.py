from typing import List

class Solution:
    def maxScoreSightseeingPair(self, values: List[int]) -> int:
        suffix = []

        curr_score = float('-inf')
        for j in range(len(values) - 1, -1, -1):
            curr_score = max(curr_score, values[j] - j)
            suffix.append(curr_score)
        suffix = suffix[::-1]

        max_score = 0
        for i in range(0, len(values) - 1):
            max_score = max(max_score, values[i] + i + suffix[i + 1])
        return max_score
        
