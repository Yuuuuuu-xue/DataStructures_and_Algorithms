from typing import List

class Solution:
    def minMovesToSeat(self, seats: List[int], students: List[int]) -> int:
        seats.sort()
        students.sort()

        min_moves = 0
        for i in range(len(seats)):
            min_moves += abs(students[i] - seats[i])

        return min_moves        
