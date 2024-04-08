from typing import List

class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        sandwiches.reverse()
        num_circles = 0
        num_squares = 0
        for pref in students:
            if pref == 0:
                num_circles += 1
            else:
                num_squares += 1
        
        while len(sandwiches) > 0:
            # Try to assign the top of the stack to a student
            if sandwiches[-1] == 0 and num_circles > 0:
                num_circles -= 1
                sandwiches.pop()
            elif sandwiches[-1] == 1 and num_squares > 0:
                num_squares -= 1
                sandwiches.pop()
            else:
                break
        
        return len(sandwiches)
