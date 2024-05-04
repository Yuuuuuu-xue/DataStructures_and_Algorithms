# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 881

## Problem
You are given an array `people` where `people[i]` is the weight of the `ith` person, and an infinite number of boats where each boat can carry a maximum weight of `limit`. Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most `limit`.

Return the minimum number of boats to carry every given person.

## Example:
```
Input: people = [1, 2], limit = 3
Output: 1
Explanation: 1 boat for (1, 2)

Input: people = [3, 2, 2, 1], limit = 3
Output: 3
Explanation: 3 boats (1, 2), (2), and (3)
```

## Key Idea
We can simply sort the `people` array. Then, we can try to assign the maximum weight and minimum weight person to the same boat, if exceed the limit, then only assign the person with maximum weight to the boat.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.py)