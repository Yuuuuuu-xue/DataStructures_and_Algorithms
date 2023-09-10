## LeetCode Problem
Medium 763

## Description
You are given a string `s`. We want to partition the string into as many parts as possible so that each letter appears in at most one part.

Note that the partition is done so that after concatenating all the parts in order, the resultant string should be `s`.

Return a list of integers representing the size of these parts.

## Example
```
Input: s = "ababcbacadefegdehijhklij"
Output: [9, 7, 8]
Explanation:
- The first group is "ababcbaca"
- The second group is "defegde"
- The third group is "hijhklij"

Input: s = "eccbbbbdec"
Output: [10]

Note each group must contain all the same character. In other words, no same character appears in the different group.
```

## Basic Idea
If we have a map that keeps track of the index of first and last index of this character. Then we can simply traverse `s` again, use the map to keep update the last index of the group to find out the size.

## Complexity Analysis
- Runtime Complexty: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)