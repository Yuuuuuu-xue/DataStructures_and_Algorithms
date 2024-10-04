from typing import List

class Solution:
    def dividePlayers(self, skill: List[int]) -> int:
        skill.sort()
        total_skill = skill[0] + skill[-1]
        sum_chemistry = 0

        for i in range(len(skill) // 2):
            if skill[i] + skill[-i - 1] != total_skill:
                return -1
            sum_chemistry += skill[i] * skill[-i - 1]
        
        return sum_chemistry
