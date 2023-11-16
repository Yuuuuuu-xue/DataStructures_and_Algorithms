# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1980

## Description
Given an array of strings `nums` containing `n` unique binary strings  each of length `n`, return a binary string of length `n` taht does not appear in `nums`. If there are multiple answers, you may return any of them.

## Example
```
Input: nums = ["01", "10"]
Output: "11"
Explanation: "11" does not appear in nums. "00" would also be correct.

Input: nums = ["00", "01"]
Output: "11"
Explanation: "11" does not appear in nums. "10" would also be correct.
```

## Key Idea
Let `s` be a set of `nums`. Then for each number `i` starting from `0`, convert it to binary number, if not exist in the `s`, then that's the output we are looking for.

## Runtime Complexity
- Runtime Complexity: O(n ^ 2) since loop `i` starting from `0` and takes `O(n)` converts to the binary string
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
