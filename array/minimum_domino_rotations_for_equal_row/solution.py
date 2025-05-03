from typing import List

class Solution:
    def minDominoRotations(self, tops: List[int], bottoms: List[int]) -> int:
        top_value = tops[0]
        # [Cost to rotate to top_value to top, cost to rotate top_value to bottom]
        top_cost = [0, 1 if tops[0] != bottoms[0] else 0]

        bottom_value = bottoms[0]
        bottom_cost = [1 if tops[0] != bottoms[0] else 0, 0]

        for i in range(1, len(tops)):
            # Try to rotate so we have <top_value> at top or bottom
            if top_cost != -1 and (tops[i] == top_value or bottoms[i] == top_value):
                if tops[i] == top_value and bottoms[i] == top_value:
                    pass
                elif tops[i] == top_value:
                    top_cost[1] += 1
                else:
                    top_cost[0] += 1
            else:
                top_cost = -1

            if bottom_cost != -1 and (bottoms[i] == bottom_value or tops[i] == bottom_value):
                if bottoms[i] == bottom_value and tops[i] == bottom_value:
                    pass
                elif bottoms[i] == bottom_value:
                    bottom_cost[0] += 1
                else:
                    bottom_cost[1] += 1
            else:
                bottom_cost = -1

            if top_cost == -1 and bottom_cost == -1:
                return -1
            
        if top_cost == -1:
            return min(bottom_cost)
        elif bottom_cost == -1:
            return min(top_cost)
        else:
            return min(min(top_cost), min(bottom_cost))