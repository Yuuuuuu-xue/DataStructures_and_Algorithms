## Bitmask
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2429

## Problem
Given two positive integers `num1` and `num2`, find the positive integer `x` such that:
- `x` has the same number of set bits as `num2` and
- the value `x XOR num1` is minimal

Note that `XOR` is the bitwise XOR operation.

Return the integer `x`. The test cases are generated such that `x` is uniquely determined.

The number of set bits of an integer is the number of `1`'s in its binary representation.

## Example
```
Input: num1 = 3, num2 = 5
Output: 3
Explanation: The binary representation of num1 and num2 are 0011 and 0101, respectively. The integer 3 has the same number of set bits as num2, and the value 3 XOR 3 = 0 is minmal.
```

## Key Idea
We can simply loop over the bits of `num2` and count the number of 1 bit.

Then we can use it to set some `1` in `num1` to `0` with this counter.

If `num1` has still some ones left, then we return it.

If we convert all the 1s and still some left over, we use least significant bits to 1.

## Complexity Analysis
- Runtime Complexity: O(1) since number of bits is bounded by a constant
- Space Complexity: O(1)

## Solution:
- [Python Solution](./solution.py)