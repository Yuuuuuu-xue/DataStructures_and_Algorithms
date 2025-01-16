## Bitmask
Click [here](../notes.md) to go back to the notes page.

## LeetCode Question
Medium 2425

## Problem
You are given two 0-indexed arrays, `nums1` and `nums2`, consisting of non-negative integers. There exists another array `nums3`, which contains the bitwise XOR of all pairings of integers between `nums1` and `nums2` (every integer in `nums1` is paired with every integer in `nums2` exactly once).

Return the bitwise OR of all integers in `nums3`.

## Example
```
Input: nums1 = [2, 1, 3], nums2 = [10, 2, 5, 0]
Output: 13
Explanation:
A possible nums3 array is [8, 0, 7, 2, 11, 3, 4, 1, 9, 1, 6, 3]. The bitwise XOR of all these numbers is 13, so we return 13.
```

## Key Idea
Note a XOR b = a and a XOR a = 0 and (a XOR b) XOR c = a XOR (b XOR c).

If we expand the final output of this question with two arrays [a1, a2] and [b1, b2, b3]

Then we have

(a1 XOR b1) XOR (a1 XOR b2) XOR (a1 XOR b3) XOR
(a2 XOR b1) XOR (a2 XOR b2) XOR (a2 XOR b3)

and is equilvalent to

(a1 XOR a1 XOR a1) = a1 XOR
(a2 XOR a2 XOR a2) = a2 XOR
(b1 XOR b1) = 0 XOR
(b2 XOR b2) = 0 XOR
(b3 XOR b3) = 0

which is equal to a1 XOR a2.

Note we could have duplicate numbers.

So we can simply count the frequency of each number in each array.

So if frequency of `a1` is `x`, then multiply it by the length of another array and we can `XOR a1` if it is odd otherwise it's `0`.
 
## Complexity Analysis
- Time complexity: `O(n + m)` 
- Space complexity: `O(n + m)`

## Solution
- [Python](./solution.py)
