# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2134

## Problem
A swap is defined as taking two distinct positions in an array and swapping the values in them.

A circular array is defined as an array where we consider the first element and the ast element to be adjacent.

Given a binary circular array `nums`, return the minimum number of swaps required to group all `1`'s present in the array together at any location.

## Example:
```
Input: nums = [0, 1, 0, 1, 1, 0, 0]
Output: 1
```

## Key Idea
Note, to handle the circular array, we can join the array with itself.

So if given `array`, we can define new_array `[...array, ...array]`. Then, `new_array[0:len(array)]`, ..., `new_array[len(array)-1:len(new_array)]` can be all the possible array of the circular arrays.

We can first of all count the number of `1`s and then we can use a window with size equals to this number. Then, we can find all the possible arrays and count the number of minimum zeros in that window.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)