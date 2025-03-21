## Topological Sort
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2115

## Problem
You have information about `n` different recipes. You are given a string array `recipes` and a 2D string array `ingredients`. The `ith` recipe has the name `recipes[i]`, and you can create it if you have all the needed ingredients from `ingredients[i]`. A recipe can also be an ingredient for other recipes, i.e., `ingredients[i]` may contain a string that is in `recipes`.

You are also given a string array `supplies` containing all the ingredients that you initially have, and you have an infinite supply of all of them.

Return a list of all the recipes that you can create. You may return the answer in any order.

Note that two recipes may contain each other in their ingredients.

## Example:
```
Input: recipes = ["bread", "sandwich", "burger"], ingredients = [["yeast", "flour"], ["bread", "meat"], ["sandwich", "meat", "bread"]], supplies = ["yeast", "flour", "meat"]
Output: ["bread", "sandwich", "burger"]
```

## Key Idea
We will solve this problem with topological sort because this is essentially a dependency problem.

The node in the graphs are recipes and ingredients. For each node, we store the in-degree for each node. For each node, it will have the number of in-degree + 1 (itself). So we start with supplies and add ingredients into traverse list if it's in the supplies.

The initial traverse list will be the `supplies`. If any node is a recipe, add to the final output set.

## Complexity Analysis
- Runtime Complexity: O(n + m + k) where n = len(supplies), m = len(ingredients), and k = len(supplies)
- Space Complexity: O(n + m + k)

## Solution
- [Python](./solution.py)