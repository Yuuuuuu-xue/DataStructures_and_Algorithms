# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 1688

## Problem
You are given an integer `n`, the number of teams in a tournament that has strange rules:
- If the current number of teams is even, each team gets paired with another team. A total of `n / 2` matches are played, and `n / 2` teams advance to the next round
- If the current number of teams is odd, one team is randomly advances in the tournament, and the rest gets paired. A total of `(n - 1) / 2` matches are played, and `(n - 1) /  2 + 1` teams advance to the next round. 

Return the number of matches played in the tournament until a winner is decided.
  
## Example:
```
Input: n = 7
Output: 6
Explanation: Detailed of the tournament:
- 1st round: teams = 7, matches = 3, and 4 teams advance
- 2nd round: teams = 4, matches = 2, and 2 teams advance
- 3rd round: teams = 2, matches = 1, and 1 team is declared the winner
Total number of matches = 3 + 2 + 1 = 6
```

## Key Idea
Simply just keep divide it by 2 until it reaches to 1 and we can return it. If odd, then divide it by 2 and plus 1 for the next round.

## Complexity Analysis
- Runtime Complexity: O(sqrt(n))
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)
