## Bitmask
Click [here](../notes.md) to go back to the notes page.

## LeetCode Question
Medium 1442

## Problem
Given an array of integers `arr`.

We want to select three indices `i`, `j`, and `k` where (`0 <= i < j <= k < arr.length`).

Let's define `a` and `b` as follows:
- `a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]`
- `b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]`

Note that ^ denotes the bitwise-xor operation.

Return the number of triplets (`i`, `j` and `k`) where `a == b`.

## Example
```
Input: arr = [2, 3, 1, 6, 7]
Output: 4
Explanation: The triplets are (0, 1, 2), (0, 2, 2), (2, 3, 4) and (2, 4, 4)
```

## Key Idea
Note if we find `a` and `b` subarrays such that `xor` of them is equal. Then we can `xor` all the elements in both `a` and `b`, and the value should equal to `0`.

Thus, we can simply loop over all the pairs `(i, k)`, if xor of all the elements are equal, then we can choose any `j` in `[i + 1, k]` and it's avalid triplet.
 
## Complexity Analysis
- Time complexity: `O(n ^ 2)` 
- Space complexity: `O(1)`

## Solution
- [Python](./solution.py)
