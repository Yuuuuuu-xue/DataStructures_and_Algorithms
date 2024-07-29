from typing import List

class Solution:
    def numTeams(self, rating: List[int]) -> int:
        num_teams = 0

        for i in range(1, len(rating) - 1):
            mid = rating[i]
            left_small = 0
            left_large = 0
            right_small = 0
            right_large = 0

            for j in range(i):
                if rating[j] < mid:
                    left_small += 1
                elif rating[j] > mid:
                    left_large += 1
            
            for j in range(i + 1, len(rating)):
                if rating[j] < mid:
                    right_small += 1
                elif rating[j] > mid:
                    right_large += 1
            
            num_teams += left_small * right_large + left_large * right_small

        return num_teams
