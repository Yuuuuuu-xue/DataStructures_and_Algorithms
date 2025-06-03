from typing import List

class Solution:
    def maxCandies(self, status: List[int], candies: List[int], keys: List[List[int]], containedBoxes: List[List[int]], initialBoxes: List[int]) -> int:
        available_boxes = []
        open_boxes = []
        o = 0
        visited = set()
        owned_keys = set()

        for i in initialBoxes:
            if status[i] == 1:
                open_boxes.append(i)
                visited.add(i)
            else:
                available_boxes.append(i)

        while open_boxes:
            next_q = []

            for i in open_boxes:
                o += candies[i]

                # Add keys to the available keys
                for k in keys[i]:
                    owned_keys.add(k)
                
                # Add available boxes
                for i in containedBoxes[i]:
                    if i in visited:
                        continue
                    if status[i] == 1:
                        visited.add(i)
                        next_q.append(i)
                    else:
                        available_boxes.append(i)
            
            # Loop over available boxes to see if we have keys
            next_available_boxes = []
            for i in available_boxes:
                if i in visited:
                    continue
                if i in owned_keys:
                    visited.add(i)
                    next_q.append(i)
                else:
                    next_available_boxes.append(i)
            
            open_boxes = next_q

        return o
