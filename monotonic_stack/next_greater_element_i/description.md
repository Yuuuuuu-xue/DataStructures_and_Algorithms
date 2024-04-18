## Monotonic Stack
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 496

## Problem
The next greater element of some element `x` in an array is the first greater element that is to the right of `x` in the same array.

You are given two distinct 0-indexed integer arrays `nums1` and `nums2`, where `nums1` is a subset of `nums2`.

For each `0 <= i < nums1.length`, find the index `j` such that `nums[i] == nums[j]` and determine the next greater element of `nums2[j]` in `nums2`. If there is no next greater element, then the answer for this queyr is `-1`.

Return an array `ans` of length `nums1.length` such that `ans[i]` is the next greater element as described above.

## Example
```
Input: nums1 = [4, 1, 2], nums2 = [1, 3, 4, 2]
Output: [-1, 3, -1]
Explanation:
- For number 4, there is no next greater element, so the answer is -1
- For number 1, the next greater element is 3
- For number 2, there is no next greater element, so the answer is -1
```

## Key Idea
For given any element, we want to the find the next greater element, this provides a hint that we need to iterate over the list from back and use a monotonic stack to solve this problem.

Let `monoStack` be a monotonic stack in decreasing order. For each element, we pop all the smaller elements and push it back to the stack.

For each element `x`, we pop it all smaller elements from `monoStack`, then if `x` is in `nums1`, then the last element in the `monoStack` is the answer in the output array.

To update the output array of `x` at correct index with constant time, we can define a map that maps the element to its index and define an output array with `[-1, ..., -1]`. Then we can use a map to update the value at a constant time.

## Complexity Analysis
- Runtime Complexity: O(n + m) where n is len(nums1) and m is len(nums2)
- Space Complexity: O(n + m)

## Solution
- [Python](./solution.py)
