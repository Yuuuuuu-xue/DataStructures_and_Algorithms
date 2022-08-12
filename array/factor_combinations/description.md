# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 254 (Premium)

## Problem
Numbers can be regarded as the product of their factors. For example: `8 = 2 x 2 x 2 = 2 x 4`. Given an integer `n`, return all possible combinations of its factors. You may return the answer in any order. Note that the factors should be in the range `[2, n - 1]`.

## Example:
```
Input: n = 1
Output: []

Input: n = 12
Output: [[2, 6], [3, 4], [2, 2, 3]]

Input: n = 37
Output: []
```

## Key Idea
Notice, for given any number `n`, suppose it can be divided by a number `k`, then we know `[k, n / k]` must be a solution. Here we assume `k` <= `n / k`. Then the solutions of `[k, ...]` where `...` are the possible combinations of `n / k`. Then we can use recursion to find a list of possible combinations and join those two. We can keep a map that maps the item to a list of possible combinations as a cache.

## Solution
- [C++](solution.cpp)