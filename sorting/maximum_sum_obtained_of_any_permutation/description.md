## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1589

## Problem
We have an array of integers, `nums`, and an array of `requests` where `requests[i] = [start_i, end_i]`. The `ith` request asks for the sum of `nums[start_i] + nums[start_i + 1] + ... + nums[end_i - 1] + nums[end_i]`. Both `start_i` and `end_i` are 0-indexed.

Return the maximum total sum of all requests among all permutations of `nums`.

Since the answer may be too large, return it modulo `10**9 + 7`

## Example
```
Input: nums = [1, 2, 3, 4, 5], requests = [[1, 3], [0, 1]]
Output: 19
Explanation: The optimal permutation is [3, 5, 4, 2, 1]
- requests[0]: nums[1] + nums[2] + nums[3] = 5 + 4 + 2 = 11
- requests[1]: nums[0] + nums[1] = 3 + 5 = 8
- total = 11 + 8 = 19
```

## Key Idea
If we have a list of frequency of `nums[i]`, then we can assign the largest number to the highest frequency.

Thus, we need to sort the `nums`.

Then, we need to build the frequency array. However, if we iterate over `requests[i]` and loop over `requests[i][0]` to `requests[i][1]` and update frequency, then we will end up with TLE.

Thus, we need a better way to build the frequency. Note if we have a frequency list `freq = [0, ..., 0]`. If we have a request `[1, 3]`, this means we have frequency `1` starting from `1` to `3` both inclusive. We can do is that increment `freq[1]` by 1. Then all the elements `> 1` also increment by prev element i.e. `freq[i] += freq[i - 1]` until we reach to `3`. At index `4`, we can decrement it by `1` and thus the sum `freq[4] += freq[3]` will be -1 + 1 = 0.

Thus, we can simply loop over `requests` and for `requests[i]`, we can set `freq[requests[i][0]] += 1` and `freq[requests[i][1] + 1] -= 1`.

## Complexity Analysis
- Runtime Complexity: O(n lg n + m + m lg m) where m = len(requests)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
