## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2870

## Problem
You are given a 0-indexed array `nums` consisting of positive integers.

There are two types of operations that you can apply on the array any number of times:
- Choose two elements with equal values and delete them from the array
- Choose three elements with equal values and delete them from the array
Return the minimum number of operations required to make the array empty, or `-1` if it is not possible.

## Example:
```
Input: nums = [2, 3, 3, 2, 2, 4, 2, 3, 4]
Output: 4
Explanation:
- Remove two 2's, and thus nums = [3, 3, 2, 4, 2, 3, 4]
- Remove two 2's, and thus nums = [3, 3, 4, 3, 4]
- Remove three 3's, and thus nums = [4, 4]
- Remove two 4's, and thus nums = []
```

## Key Idea
First of all, find a map that maps the number of its occurrence. If the occurrence of any number is 1, then we can return -1 immediately.

Then, loop over each number, if number is divisible by 3, then we can use `freq / 3` operations to remove all the numbers.

If number is not divisible by 3, then we can use `freq / 3 + 1`, the extra operation to remove the pair.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
