## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1996

## Problem
You are playing a game that contains multiple characters, and each of the characters has two main properties: attack and defense. You are given a 2D integer array `properties` where `properties[i] = [attack_i, defense_i]` represents the properties of the `ith` character in the game.

A character is sadi to be weak if any other character has both attack and defense levels strictly greater than this character's attack and efense levels.

More formally, a character `i` is said to be weak if there exists another character `j` where `attack_j > attack_i` and `defense_j > defense_i`

Return the number of weak characters.

## Example
```
Input: properties = [[5, 5], [6, 3], [3, 6]]
Output: 0
Explanation: No character has strictly greater attack and defense than the other.

Input: properties = [[2, 2], [3, 3]]
Output: 1
Explanation: The first character is weak because the second character has a strictly greater attack and defense.
```

## Key Idea
Note, if we sort the `properties` by `attack` start from largest to smallest, then if tie, we will sort the `defense` from smallest to largest.

Then we can simply loop over the `properties` and keep track the `max_defense` that we have seen. For `properties[i]`,
- If `properties[i].attack < properties[i - 1].attack`, then if `properties[i].defense < max_defense`, then we can increment the number of weak characters.
- If `properties[i].attack < properties[i - 1].attack` and `properties[i].defense >= max_defense`, then we can update `max_defense`.
- If `properties[i].attack == properties[i - 1].attack`, then since we sort the `defense` from smallest to largest, it guarantees that `properties[i].defense < max_defense` is `false` and thus we can update `max_defense`
- If `properties[i].attack > properties[i - 1].attack`, then it's not possible since we sort the attack properties from largest to smallest.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
