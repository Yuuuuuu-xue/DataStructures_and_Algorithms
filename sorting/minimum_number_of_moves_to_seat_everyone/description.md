## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 2037

## Problem
There are `n` seats and `n` students in a room. You are given an array `seats` of length `n`, where `seats[i]` is the position of the `ith` seat. You are also given the array `students` of length `n`, where `students[j]` is the position of the `jth` student.

You may perform the following move any number of times:
- Increase or decrease the position of the `ith` student by `1` (i.e., moving the `ith` student from position `x` to `x + 1` or `x - 1`)

Return the minimum number of moves required to move each student to a seat such that no two students are in the same seat.

Note that there may be multiple seats or students in the same position at the beginning.

## Example
```
Input: seats = [3, 1, 5], students = [2, 7, 4]
Output: 4
Explanation:
- Move first student from position 2 to position 1 usign 1 move
- Move second student from position 7 to position 5 using 2 moves
- Move third student from position 4 to position 3 using 1 move
- In total, we have 1 + 2 + 1 = 4 moves
```

## Key Idea
Simply sort the two arrays and move `students[i]` to `seats[i]`.

## Complexity Analysis
- Runtime Complexity: O(n lg n + m lg m)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
