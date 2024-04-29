## Bitmask
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2997

## Problem
You are gvien a 0-indexed integer array `nums` and a positive integer `k`.

You can apply the following operation on the aray any number of times:
- Choose any element of the array and flip a bit in its binary representation. Flipping a bit means changing a `0`` to `1` or vice versa

Return the minimum number of operations required to make the bitwise `XOR` of all elements of the final array equal to `k`.

Note that you can flip leading zero bits in the binary representation of elements. For example, for the number `(101)_2` you can flip fourth bit and obtain `(1101)_2`.

## Example
```
Input: nums = [2, 1, 3, 4], k = 1
Output: 2
Explanation: We can do the following operations:
- Choose element 2 which is 3 == (011)_2, we flip the first bit and we obtain `(010)_2` == 2. nums becomes [2, 1, 2, 4]
- Choose element 0 which is 2 == (010)_2, we flip the third bit and we obtain `(110)_2` == 6. nums becomes [6, 1, 2, 4]
- XOR of all elements: 6 XOR 1 XOR 2 XOR 4 == 1 == j
- Thus 2 operations
```

## Key Idea
Note, 1 XOR 1 = 0 and 0 XOR 0 = 0, 1 XOR 0 = 1 and 0 XOR 1 = 1. Then if first bit of `k` is 0, we want all the elements first bit has even number of `1`s or even number of `0`s.

However, this requires we loop over each bit and for each bit, we loop all the elements in the list.

We can XOR all the elements, then loop over the XORed number and compare its ith bit to the ith bit of `k`, if they are the same, then no need operation and if they are different, then we need one flip operation.

However, we can XOR all the elements and XOR the `k`. Then for any bit that is `1`, it means we need an operation to flip the bits. Thus, we can simply XOR all the elements and `k`, and count the number of `1` bit.

## Solution:
- [Python Solution](./solution.py)