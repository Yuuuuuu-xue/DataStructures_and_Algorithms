## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3583

## Problem
You are given an integer array `nums`

A special triplet is defined as a triplet of indices `(i, j, k)` such that:
- `0 <= i < j < k < n`, where `n = nums.length`
- `nums[i] == nums[j] * 2`
- `nums[k] == nums[j] * 2`

Return the total number of special triplets in the array.

Since the answer may be large, return it modulo `10**9 + 7`.

## Example
```
Input: nums = [0, 1, 0, 0]
Output: 1
Explanation:
- The only special triplet is `(i, j, k) = (0, 2, 3)`
- where 0 * 2 = 0
```

## Key Idea
We can simply use a map that maps the num to frequency. We use two maps, one represent before index i and one after index i.

Then simply count how many occurrences with value 2 * nums[i] in the map before i and after i and multiply by them.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
