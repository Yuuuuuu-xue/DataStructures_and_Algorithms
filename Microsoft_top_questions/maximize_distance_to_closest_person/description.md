## LeetCode Question
Medium 849

## Description
You are given an array representing a row of `seats` where `seats[i] = 1` represents a person sitting in the `ith` seat, and `seats[i] = 0` represents that the `ith` seat is empty.

There is at least one empty seat and at least one person sitting.

Alex wants to sit in the seat such taht the distance between him and the closest person to him is maximized. Return that maximum distance to the cloest person.

## Example
```
Input: seats = [1, 0, 0, 0, 1, 0, 1]
Output: 2
Explanation: Alex sits in the second open seat (i.e. seats[2]), then the cloest person has distance 2. If Alex sits in any other open seat, the cloest person has distance 1. Thus, the maximum distance to the cloest person is 2.
```

## Key Idea
We will first find the leftmost sitting person `left` and rightmost sitting person `right` and take the maximum value of `left - 0` and `n - 1 - right`. Then we need to consider the seat where both side have person. Increment left until we reach to the next person, then the difference between the new left and left divide by 2 is also a seat possible for Alex.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)