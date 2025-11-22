## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1887

## Description
Given an integer array `nums`, your goal is to make all elements in `nums` equal. To complete one operation, follow these steps:
1. Find the largest value in `nums`. Let its index be `i` (0-indexed) and its value be `largest`. If there are multiple elements with the largest value, pick the smallest `i`.
2. Find the next largest value in `nums` strictly smaller than `largest`. Let its value be `nextLargest`.
3. Reduce `nums[i]` to `nextLargest`

Return the number of operations to make all elements in `nums` equal.

## Example
```
Input: nums = [5, 1, 3]
Output: 3
Explanation:
1. Largest = 5 at index 0, nextLargest = 3, thus reduce nums[0] to 3 and nums = [3, 1, 3]
2. Largest = 3 at index 0, nextLargest = 1, thus reduce nums[0] to 1 and nums = [1, 1, 3]
3. Largest = 3 at index 0, nextLargest = 1, thus reduce nums[2] to 1 and nums = [1, 1, 1]

Input: nums = [1, 1, 1]
Output: 0

Input: nums = [1, 1, 2, 2, 3]
Output: 4
Explanation:
1. nums = [1, 1, 2, 2, 2]
2. nums = [1, 1, 1, 2, 2]
3. nums = [1, 1, 1, 1, 2]
4. nums = [1, 1, 1, 1, 1]
```

## Key Idea
Let's sort the input array. Then we start with the largest element and let `c` be the number of largest elements, then it takes `c` operations to reduce to the nextLargest element. Then we start count how many nextLargest element and repeat

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)
- [Python](./solution.py)
