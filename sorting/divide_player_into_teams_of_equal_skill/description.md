## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2491

## Problem
You are given a positive integer array `skill` of even length `n` where `skill[i]` denotes the skill of the `ith` player. Divide the layers into `n / 2` teams of size `2` such taht the total skill of each team is equal.

The chemistry of a team is equal to the product of the skills of the players on that team.

Return the sum of the chemistry of all the teams, or return `-1` if there is no way to divide the players into teams such that the total skill of each team is equal.

## Example
```
Input: skill = [3, 2, 5, 1, 3, 4]
Output: 22
Explanation: divide the players into the following team: (1, 5), (2, 4) and (3, 3) and each team has a total skill of 6. The sum of the chemistry of all the teams is: 1 * 5 + 2 * 4 + 3 * 3 = 5 + 8 + 9 = 22.
```

## Key Idea
We can simply let the weakest and strongest player to be the same team and thus we need to sort the array. Then simply form the team and calculate the chemistry and skill is different, then return `-1`.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
