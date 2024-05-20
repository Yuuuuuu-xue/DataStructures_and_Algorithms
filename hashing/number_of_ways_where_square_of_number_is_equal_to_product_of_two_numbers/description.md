## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1577

## Problem
Given two arrays of integers `nums1` and `nums2`, return the number of triplets formed (type 1 and type 2) under the following rules:
- Type 1: triplet (i, j, k) if nums1[i]^2 == nums2[j] * nums2[k] where 0 <= i < nums1.length and 0 <= j < k < nums2.length
- Type 2: triplet (i, j, k) if nums2[i]^2 == nums1[j] * nums1[k] where 0 <= i < nums2.length and 0 <= j < k < nums1.length

## Example
```
Input: nums1 = [7, 4], nums2 = [5, 2, 8, 9]
Output: 1
Explanation:
- Type 1: (1, 1, 2), nums1[1] ^ 2 = nums2[1] * nums2[2] = 4 ^ 2 = 2 * 8

Input: nums1 = [1, 1], nums2 = [1, 1, 1]
Output: 9
Explanation: All possible triplets are valid

Input: nums1 = [7, 7, 8, 3], nums2 = [1, 2, 9, 7]
Output: 2
Explanation: There are 2 valid triplets
- Type 1: (3, 0, 2), nums1[3] ^ 2 = nums2[0] * nums2[2]
- Type 2: (3, 0, 1), nums2[3] ^ 2 = nums1[0] * nums1[1]
```

## Key Idea
We will focus on one direction first. And reverse the list for other direction. Let's focus on type1.

Let `m` be the map that maps some number to its occurrence.

Then we can simply loop over each number `num2` in `nums2`. Then loop over each number `num1` in `nums1`. We can use the similar trick to solve the two sum problem. We check if `m[num1 * num1 / num2]` in the array, if so we found some pairs. We can += occurrence. Then increment the number. Otherwise, we store the number `m[num2]` in the m.


## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(n * m)

## Solution
- [Python](./solution.py)