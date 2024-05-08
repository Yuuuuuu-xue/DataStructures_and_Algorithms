from typing import List

class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        score = [(s, i) for i, s in enumerate(score)]     
        score.sort(reverse=True)

        o = ["" for _ in range(len(score))]
        for i in range(len(score)):
            if i == 0:
                o[score[i][1]] = "Gold Medal"
            elif i == 1: 
                o[score[i][1]] = "Silver Medal"
            elif i == 2:
                o[score[i][1]] = "Bronze Medal"
            else:
                o[score[i][1]] = str(i + 1)
        
        return o
