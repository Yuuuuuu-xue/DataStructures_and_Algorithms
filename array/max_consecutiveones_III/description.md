# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## Problem
Given a binary array `nums` and an integer `k`, return the maximum number of consecutive `1`'s in the array if you can flip at most `k 0`'s.

## Example
```
Input: nums = [1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0], k = 2
Output: 6

Input: nums = [0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1], k = 3
Output: 10
```

## Key Idea
Since we want consecutive of `1`'s, this provides a hint of using sliding window. Let `i` and `j` be two indicies of the sliding window. Let `q` be a queue of indicies of zeros in the array. Then we loop over `j` from 0 to n - 1. Then:
- If nums[j] is 1, then increment j by 1
- If nums[j] is 0 and k > 0, decrement k by 1, push j into q, and increment j by 1
- If nums[j] is 0 and k <= 0 and q is not empty, update the current solution of j - 1 - i + 1. Pop an item c from q, set i = c + 1, push j into q, and increment j by 1.
- If nums[j] is 0 and k <= 0 and q is empty, \update the current solution of j - 1 - i + 1. Set both i and j = j + 1.

## Solution
- [C++](./solution.cpp)