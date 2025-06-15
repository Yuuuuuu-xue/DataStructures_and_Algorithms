# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1432

## Problem
You are given an integer `num`. You will apply the following steps to `num` two separate times:
- Pick a digit `x (0 <= x <= 9)`
- Pick another digit `y (0 <= y <= 9)`. Note `y` can be equal to `x`
- Replace all the occurrences of `x` in the decimal representation of `num` by `y`.

Let `a` and `b` be the two results from applying the operation to `num` independently.

Return the max difference between `a` and `b`.

Note that neither `a` nor `b` may have any leading zeros, and must not be `0`.

## Example
```
Input: num = 555
Output: 888
Explanation: a = 999 and b = 111
```

## Key Idea
To find the max number, we can simply find the first digit that is non-9 and replace all occurences with 9.

To find the min number, if first number is 1, then we can find the first non-zero and non-one with 1 and replace them with 0.

Otherwise, we replace all occurrences with 1.

## Solution
- [Python](./solution.py)