# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1229

## Problem
Given the availability time slots array `slots1` and `slots2` of two people and a meeting duration `duration`, return the earliest time slot that works for both of them and is of duration `duration`. If there is no common time slot that satisfies the requirement, return an empty array. The format of a time slot is an anrray of two elements `[start, end]` representing an inclusive time range from `start` to `end`. It is guaranteed that no two availability slots of the same person intersect with each other. THat is, for any two time slots `[start_1, end_1]` and `[start_2, end_2]` of the same person, either `start_1 > end_2` or `start_2 > end_1`.

## Example
```
Input: slots1 = [[10, 50], [60, 120], [140, 210]], slots2 = [[0, 15], [60, 70]], duration = 8
Output: [60, 68]

Input: slots1 = [[10, 50], [60, 120], [140, 210]], slots2 = [[0, 15], [60, 70]], duration = 12
Output: []
```

## Key Idea
First of all, in this type of question, we need to sort both slots1 and slots2 by their start time. Then we can apply a two pointer solution and so an index `i` traverse through slots1 and an index `j` traverse though slots2. We check:
- If slots1[i] intersects with slots2[j], then
  - If their intersection duration (min_end_time - max_start_time) >= duration, then we found a duration of [max_start_time, max_start_time + duration].
- Otherwise, we need to either increase i or j:
  - If slots1[i].end_time <= slots2[j].end_time, then increment i by 1
  - Otherwise increment j by 1

## Solution
- [C++](./solution.cpp)