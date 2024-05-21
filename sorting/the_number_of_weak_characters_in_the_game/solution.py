from typing import List

class Solution:
    def numberOfWeakCharacters(self, properties: List[List[int]]) -> int:
        # Sort property.attack from largest to smallest, if tie, sort property.defense from smallest to largest
        properties.sort(key=lambda property : (-property[0], property[1]))

        max_defense = 0
        num_weak_characters = 0

        for _, defense in properties:
            if defense < max_defense:
                num_weak_characters += 1
            else:
                max_defense = defense
        
        return num_weak_characters
