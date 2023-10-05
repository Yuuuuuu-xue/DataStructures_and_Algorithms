## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 229

## Problem
Given an integer array of size `n`, find all elements that appear more than `floor(n / 3)` times.

## Example
```
Input: nums = [3, 2, 3]
Output: [3]

Input: nums = [1]
Output: [1]

Input: nums = [1, 2]
Output: [1, 2]
```

## Key Idea
Simply use a hashmap to keep track the occurrence.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
- [Rust](./solution.rs)