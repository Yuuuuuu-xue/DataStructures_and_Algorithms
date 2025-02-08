from typing import List

class Solution:
    def queryResults(self, limit: int, queries: List[List[int]]) -> List[int]:
        color_to_count = {}
        ball_to_color = {}
        o = []

        for ball, color in queries:
            if ball in ball_to_color:
                # Update the color to count
                old_color = ball_to_color[ball]
                color_to_count[old_color] -= 1
                if color_to_count[old_color] <= 0:
                    del color_to_count[old_color]
            ball_to_color[ball] = color
            if color not in color_to_count:
                color_to_count[color] = 0
            color_to_count[color] += 1

            o.append(len(color_to_count))

        return o
