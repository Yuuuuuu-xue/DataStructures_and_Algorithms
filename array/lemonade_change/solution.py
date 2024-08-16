from typing import List

class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        num_fives = 0
        num_tens = 0

        for bill in bills:
            if bill == 5:
                num_fives += 1
            elif bill == 10:
                if num_fives == 0:
                    return False
                num_fives -= 1
                num_tens += 1
            elif bill == 20:
                if num_tens >= 1 and num_fives >= 1:
                    num_tens -= 1
                    num_fives -= 1
                elif num_fives >= 3:
                    num_fives -= 3
                else:
                    return False
        return True
