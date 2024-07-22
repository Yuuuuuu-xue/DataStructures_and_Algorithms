from typing import List

class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        people = [(heights[i], names[i]) for i in range(len(names))]
        people.sort(reverse=True)
        return [people[i][1] for i in range(len(names))]        
