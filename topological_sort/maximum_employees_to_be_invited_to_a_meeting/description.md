## Topological Sort
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2127

## Problem
A company is organzing a meeting and has a limit of `n` employees, waiting to be invited. They have arranged for a large circular table, capable of seating any number of employees.

The employees are numbered from `0` to `n - 1`. Each employee has a favorite person and they will attend the meeting only if they can sit next to their favorite person at the table. The favorite person of an employee is not themself.

Given a 0-indexed integer array `favorite`, where `favorite[i]` denotes the favorite person of the `ith` employee, return the maximum number of employees that can be invited to the meeting.

## Example:
```
Input: favorite = [2, 2, 1, 2]
Output: 3
```

## Key Idea
Note, the key idea of this problem is that the problem is divided into two cases:

Cycle with length > 3. In this case, i.e. A -> B, B -> C, C -> A. We will put them in the circular table and we cannot add more people to the table. This means that the length of the longest cycle could be one possible solution.

Cycle with length = 2. In this case, i.e. A <-> B. It's a special case because we can chain up on the both end with some other nodes. i.e. X -> ... -> A <-> B ... <- Y. Then, if there is a cycle of length 2, we will find out the maximum path to A and maximum path to B without a cycle.

To find out the maximum path to a node. We can use topological sort to start with a leaf node and update the maximum_path_length[u] if we visit a node v and v -> u. If the in degree is equal to 0, we put it to the queue (i.e. remove an edge). We will also put the visited node to a set because it won't be included as a cycle. Topological sort is an algorithm that finds out all the node that is not in a cycle.

Then we loop over all the unvisited node and iterate over to find the cycle. We can do it easily with a loop because each person has exactly one favorite person (i.e. the number of an edge of a node is 1). In this case, we will find out the length of a cycle.

At the end, we check the length of cycle, if it equals to
- 2, then we can put 2 + max_path_length[u] + max_path_length[v], in this case, we can also put more people on to the table since they are mututally exclusive. 
- > 2, then use the cycle length since we cannot add more people

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)