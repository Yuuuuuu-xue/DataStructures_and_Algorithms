from typing import List

class Solution:
    def checkValidCuts(self, n: int, rectangles: List[List[int]]) -> bool:
        # Sort by x-axis and we make a vertical cut
        rectangles.sort(key=lambda x : x[0])

        num_rectangles = len(rectangles)

        num_vertical_cuts = 0
        i = 0
        while i < num_rectangles and num_vertical_cuts <= 2:
            # Vertical cut, we don't care about y
            end = rectangles[i][2]

            while i + 1 < num_rectangles and rectangles[i + 1][0] < end:
                i += 1
                end = max(end, rectangles[i][2])
            num_vertical_cuts += 1
            i += 1
        
        # We make the cut at the end even if there is no rectangle left
        if num_vertical_cuts > 2:
            return True
        
        # Sort by y-axis and we make a horizontal cut
        rectangles.sort(key=lambda x : x[1])
        num_horizontal_cuts = 0
        i = 0
        while i < num_rectangles and num_horizontal_cuts <= 2:
            end = rectangles[i][3]

            # print(i)
            while i + 1 < num_rectangles and rectangles[i + 1][1] < end:
                i += 1
                end = max(end, rectangles[i][3])
            # print(i + 1, end)
            num_horizontal_cuts += 1
            i += 1
        
        return num_horizontal_cuts > 2
