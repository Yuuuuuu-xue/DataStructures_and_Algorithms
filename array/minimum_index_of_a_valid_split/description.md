# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2780

## Problem
An element `x` of an integer array `arr` of length `m` is dominant if more than half the elements of `arr` have a value of `x`.

You are given a 0-indexed integer array `nums` of length `n` with one dominant element.

You can split `nums` at an indx `i` into two arrays `nums[0, ..., i]` and `nums[i + 1, ..., n - 1]`, but the split is only valid if:
- `0 <= i < n - 1`
- `nums[0, ..., i]` and `nums[i + 1, ..., n - 1]` have the same dominant element

Here, `nums[i, ..., j]` denotes the subarray of `nums` starting at index `i` and ending at index `j`, both ends being inclusive. Particularly, if `j < i` then `nums[i, ..., j]` denotes an empty subarray. 

Return the minimum index of a valid split. If no valid split exists, return `-1`.

## Example
```
Input: nums = [1, 2, 2, 2]
Output: 2
Explanation: We can split into two arrays [1, 2, 2] and [2]
```

## Key Idea
First of all, we can simply use a hashmap to track the frequencies to find out the dominant element.

However, this requires O(n) space. Since we can assume there exists a dominant, we can use an algorithm to find out this dominant element with constant space:
- Loop over element and with a max element and a count
- If count = 0, set count to 1 and set max element to curr element
- If count > 0, if max element == curr element, increment count
- If count > 0, if max element != curr element, decrement count

Now, after we have the dominant element. We can simply find the actual frequency of this element by looping over again.

After we have the max element, we can simply loop over the elements `i` and keep a counter of frequency of this max element from `0` to `i`. We can find out if it is possible to have dominants in both arrays.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)