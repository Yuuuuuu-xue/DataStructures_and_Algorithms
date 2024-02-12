# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 169

## Problem
Given an array `nums` of size `n`, return the majority element.

The majority element is the element that appears more than `floor(n / 2)` times. You may assume that the majority element always exists in the array.

## Example
```
Input: nums = [3, 2, 3]
Output: 3
```

## Key Idea
There are multiple ways to solve this problem. We can inplace sort the array and return the middle element, this way, it takes `O(n lg n)` runtime and `O(1)` space.

We can also build a hash table and thus `O(n)` runtime and `O(n)` space.

To solve this problem with `O(n)` runtime nad `O(1)` space, we can use a candidate system. Each number will vote once and we have a counter, if the element is not a majority, it will decrement the counter and if element is a majority, it will increment the counter. Thus, at the end, the candidate must be a majority element.

Thus, let `candidate` be current element if `vote == 0`. Then, increment/decrement vote based on current element.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)