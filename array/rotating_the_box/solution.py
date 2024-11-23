from typing import List

class Solution:
    def rotateTheBox(self, box: List[List[str]]) -> List[List[str]]:
        for row in box: 
            # Shift stones rightward
            left = 0

            for j in range(len(row)):
                if row[j] == '#':
                    # If equals to stone do nothing
                    pass
                elif row[j] == '.':
                    # If equals to empty spot, then swap it with a stone
                    while left < j and row[left] != '#':
                        left += 1
                    
                    # If reaches to a valid stone
                    if left < j and row[left] == '#':
                        # Swap
                        row[left] = '.'
                        row[j] = '#'
                        left += 1
                else:
                    # Reach to an obstacle
                    # We need to update left to obstacle + 1
                    left = j + 1
        
        # After swap, we need to rotate
        new_box = [[0 for _ in range(len(box))] for _ in range(len(box[0]))]

        # [[#, *, .],
        #  [*, ., #]]
        # Rotate 90 degree:
        # [[*, #],
        #  [., *],
        #  [#, .]]

        # (0, 0) -> (0, 1)

        for i in range(len(box)):
            for j in range(len(box[0])):
                new_box[j][-i - 1] = box[i][j]
        
        return new_box
