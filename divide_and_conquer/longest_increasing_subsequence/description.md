## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 300

## Problem
Given an integer array `nums`, return the length of the longest strictly increasing subsequence. A subsequence is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements. For example, `[3, 6, 2, 7]` is a subsequence of the array `[0, 3, 1, 6, 2, 2, 7]`.

## Example
```
Input: nums = [10, 9, 2, 5, 3, 7, 101, 18]
Output: 4
Explanation: The longest increasing subsequence is [2, 3, 7, 101], therefore the length is 4.

Input: nums = [0, 1, 0, 3, 2, 3]
Output: 4

Input: nums = [7, 7, 7, 7, 7, 7, 7]
Output: 1
```

## Key Idea
Let `lst` be a list of values sorted in increasing order. Then we loop over the element of `nums` and for each `item`, we check:
- If last item of `lst` is < `item`, then this means `item` > all the elements in the lst and thus also an element in the increasing subsequence. We can append `item` into the `lst`
- If last item of `lst` > `item`, then we want to find a smallest element in the `lst` such that it is greater than `item`. In this case, the length of `lst` is not changed but make it with a lower value as possible to we could insert a higher value in the future. Since we are mataining the `lst` to be sorted in increasing order, we can use the binary search to find this smallest element.

At the end, the `lst` is the longest increasing subsequence and we can simply return its length.

## Solution
- [C++](./solution.cpp)