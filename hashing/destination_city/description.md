## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1436

## Description
You are given the array `paths`, where `paths[i] = [cityA_i, cityB_i]` means there exists a direct path going from `cityA_i` to `cityB_i`. Return the destination city, that is, the city without any path outgoing city.

It is guarnateed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.

## Example
```
Input: paths = [["B","C"],["D","B"],["C","A"]]
Output: A
Explanation: All possible paths: "D" -> "B" -> "C" -> "A"
```

## Key Idea
Simply let `s` be a hash that removes `cityA_i`, at the end, set should contain one element and thus destination city.

## Runtime Complexity
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)
