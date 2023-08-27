## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 403

## Problem
A frog is crossing a river. The river is divided into some number of units, and at each unit, there may or may not exist a stone. The frog can jump on a stone, but it must not jump into the water.

Given a list of stones' positions (in units) in sorted ascending order, determine if the frog can cross the river by landing on the last stone. Initially, the frog is on the first stone and assumes the first jump must be `1` unit.

If the frog's last jump was `k` units, its next jump must be either `k - 1`, `k`, or `k + 1` units. The frog can only jump in the forward direction.
 
## Example
```
Input: stones = [0, 1, 3, 5, 6, 8, 12, 17]
Output: true
Explanation: The frog can jump to the last stone by jumping to 1 unit to the 2nd stone, then 2 units to the 3rd stone, then 2 units to the 4th stone, then 3 units to the 6th stone, 4 units to the 7th stone, and 5 units to the 8th stone

Input: stones = [0, 1, 2, 3, 4, 8, 9, 11]
Output: false
Explanation: There is no way to jump to the last stone as the gap between the 5th and 6th stone is too large
```

## Key Idea
We can use BFS/DFS to solve this problem. We can convert the `stones` into a set. Then at the current position with `k`, the neighbors are `pos + k - 1`, `pos + k`, and `pos + k + 1`. If the value of the neighbor exists in the set, then we can visit it. We also need to avoid visit the same position again. In this case, a frog can arrive at the same position but with different `k` values to reach to different positions.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution:
- [C++](solution.cpp)