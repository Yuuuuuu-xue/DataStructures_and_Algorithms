## Binary Search Tree
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
Medium 2353

## Problem
Design a food rating system that can do the following:
- Modify the rating of a food item listed in the system
- Return the highest-rated food item for a type of cuisine in the system

Implement the `FoodRating` class:
- `FoodRatings(String[] foods, String[] cuisines, int[] ratings)` initilizes the system. The food items are described by `foods`, `cuisines` and `ratings`, all of which have a length of `n`.
  - `foods[i]` is the name of `ith` food
  - `cuisines[i]` is the type of cuisione of the `ith` food and
  - `ratings[i]` is the initial rating of the `ith` food
- `void changeRating(String food, int newRating)` changes the rating of the food item with the name `food`
- `String highestRated(String cuisine)` returns the name of the food item that has the highest rating for the given type of `cuisine`. If there is a tie, return the item with the lexicographically smaller name.

## Example
```
FoodRatings foodRatings = new FoodRatings(["kimchi", "miso", "sushi", "moussaka", "ramen", "bulgogi"], ["korean", "japanese", "japanese", "greek", "japanese", "korean"], [9, 12, 8, 15, 14, 7]);
foodRatings.highestRated("korean"); // return "kimchi"
                                    // "kimchi" is the highest rated korean food with a rating of 9.
foodRatings.highestRated("japanese"); // return "ramen"
                                      // "ramen" is the highest rated japanese food with a rating of 14.
foodRatings.changeRating("sushi", 16); // "sushi" now has a rating of 16.
foodRatings.highestRated("japanese"); // return "sushi"
                                      // "sushi" is the highest rated japanese food with a rating of 16.
foodRatings.changeRating("ramen", 16); // "ramen" now has a rating of 16.
foodRatings.highestRated("japanese"); // return "ramen"
                                      // Both "sushi" and "ramen" have a rating of 16.
                                      // However, "ramen" is lexicographically smaller than "sushi".
```

## Key Idea
Since `highestRated` needs to return the highest rating, it maybe a good idea to use a heap. However, there is another function `changeRating` that requires to change the rating and thus heap is not a good idea. Thus, another possible way is to use a binary search tree that supports delete, insert, and get in `O(lg n)`.

Thus, let a map that maps `cuisine` to a binary search tree with an item (rating, name) and it is sorted by this.

In addition, we need a map that maps `foodName` to `cuisine` so we know which `cuisine` to update.

In addition, we need a map that maps `foodName` to `rating` so we know which `rating` to look for.

## Complexity Analysis
- Runtime Complexity:
  - `Constructor`: `O(n lg n)`
  - `changeRating`: `O(lg n)`
  - `highestRating`: `O(lg n)`
- Space Complexity: `O(n)`

## Solution
- [C++](./solution.cpp)