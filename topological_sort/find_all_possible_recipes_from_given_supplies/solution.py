from typing import List
from collections import defaultdict

class Solution:
    def findAllRecipes(self, recipes: List[str], ingredients: List[List[str]], supplies: List[str]) -> List[str]:
        m = {}
        q = supplies
        recipes_set = set(recipes)
        ingredient_to_recipe_map = defaultdict(list)

        for i in range(len(recipes)):
            recipe = recipes[i]
            ingredient_list = ingredients[i]

            for ingredient in ingredient_list:
                if ingredient not in recipes_set:
                    m[ingredient] = 1
                ingredient_to_recipe_map[ingredient].append(recipe)
            
            m[recipe] = len(ingredient_list)


        o = set()
        visited = set(supplies)
        
        while q:
            next_q = []

            for item in q:
                if item in recipes_set:
                    o.add(item)
                
                # Update all nodes that require this ingredients
                for recipe in ingredient_to_recipe_map[item]:
                    if recipe in visited:
                        continue
                    m[recipe] -= 1
                    if m[recipe] == 0:
                        visited.add(recipe)
                        next_q.append(recipe)

            q = next_q
        
        return list(o)
