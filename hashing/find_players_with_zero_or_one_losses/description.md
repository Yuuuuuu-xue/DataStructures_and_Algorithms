## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2225

## Description
Yo uare given an integer array `matches` where `matches[i] = [winner_i, loser_i]` indicates that the player `winner_i` defeated player `loser_i` in a match.

Return a list `answer` of size `2` where
- `answer[0]` is a list of all players that have not lost any matches
- `answer[1]` is a list of all players that have lost exactly one match

The value in the two lists should be returned in increasing order.

You should only consider the players that have played at least one match.

## Example
```
Input: matches = [[1,3],[2,3],[3,6],[5,6],[5,7],[4,5],[4,8],[4,9],[10,4],[10,9]]
Output: [[1,2,10],[4,5,7,8]]
Explanation:
- Players 1, 2, and 10 have not lost any matches.
- Players 4, 5, 7, and 8 each have lost one match.
- Players 3, 6, and 9 each have lost two matches.
Thus, answer[0] = [1,2,10] and answer[1] = [4,5,7,8].
```

## Key Idea
Let `m` be a map that maps the player to number of losses. Then simply traverse the array and put player with 0 losts and 1 lost. At the end, sort both list.

## Runtime Complexity
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)
