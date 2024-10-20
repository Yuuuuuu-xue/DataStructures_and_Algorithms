## Recursion
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1545

## Problem
Given two positive integers `n` and `k`, the binary string `Sn` is formed as follows: 
- `S1 = "0"`
- `Si = S_(i - 1) + "1" + reverse(invert(S_(i - 1))) for i > 1`

Where `+` denotes the concatenation operation, `reverse(x)` returns the reversed string `x`, and `invert(x)` inverts all the bits in `x`.

For example, the first four strings in the above sequence are:
- S1 = "0"
- S2 = "011"
- S3 = "0111001"
- S4 = "011100110110001"

Return the `kth` bit in `Sn`. It is guarnateed that `k` is valid for the given `n`.

## Example:
```
Input: n = 3, k = 1
Output: "0"
Explanation: S3 is "0111001", the first bit is 0
```

## Key Idea
If `n == 1`, we return `0` as the base case.

The length will be 2^n - 1.

- If `length // 2 == k - 1`, then `k` is the mid element, and we can return `1`
- If `length // 2 > k - 1`, this means `k` is in the first half element which is in `S_(i - 1)`, and thus we can recursive find the element in the first half.
- If `length // 2 < k - 1`, this means `k` is in the second half element. Thus, we need to search the second half. What is second half? Second half is the reverse and invert of bits. Thus, we need to update `k` since it's reversed. The new `k` will be `length - k + 1`. Then after we find the bit, we need to reverse it.


## Complexity Analysis
- Runtime Complexity: O(lg n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)