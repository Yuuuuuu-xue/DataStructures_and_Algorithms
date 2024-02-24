## Graph 
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2092

## Problem
You are given an integer `n` indicating there are `n` people numbered from `0` to `n - 1`. You are also given a 0-indexed 2D integer array `meetings` where `meetings[i] = [x_i, y_i, time_i]` indicates that person `x_i` and person `y_i` have a meeting at `time_i`. A person may attend multiple meetings at the same time. Finally, you are given an integer `firstPerson`.

Person `0` has a secret and initally shares the secret with a person `firstPerson` at time `0`. This secret is then shared every time a meeting takes place iwth a person that has the secret. More formally, for every meeting, if a person `x_i` has the secret at `time_i`, then they will share the secret with person `y_i` and vice versa.

The secrets are shared instantaneously. That is, a person may receive the secret and share it with people in other meetings within the same time frame.

Return a list of all the people that have the secret after all the meetings have taken place. You may return the answer in any order.
 
## Example
```
Input: n = 6, meetings = [[1, 2, 5], [2, 3, 8], [1, 5, 10]], firstPerson = 1
Output: [0, 1, 2, 3, 5]
Explanation:
At time 0, person 0 shares the secret with person 1.
At time 5, person 1 shares the secret with person 2.
At time 8, person 2 shares the secret with person 3.
At time 10, person 1 shares the secret with person 5.​​​​
Thus, people 0, 1, 2, 3, and 5 know the secret after all the meetings.
```

## Key Idea
We will model this problem as a graph problem. We will build the map that maps person `x_i` to a pair `(y_i, time_i)` and vice versa (i.e. map a person `y_i` to a pair `(x_i, time_i)`).

Then, we can use a priority queue to queue up the meetings with `time_i`. Then basically perform a bfs and return all nodes in the visited set.

## Complexity Analysis
- Runtime Complexity: O(m lg n) where `m` is the length of meetings
- Space Complexity: O(n)

## Solution:
- [C++](solution.cpp)