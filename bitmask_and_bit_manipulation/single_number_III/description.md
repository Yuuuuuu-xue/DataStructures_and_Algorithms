## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## Problem
Givne an integer array `nums`, in which exactly two elements appear only once and all other elements appears exactly twice. Find the two elements that appear only once. You can return the answer in any order.

You must write an algorithm that runs in linear runtime complexity and use only constant extra space.

## Example
```
Input: nums = [1, 2, 1, 3, 2, 5]
Output: [3, 5]

Input: [-1, 0]
Output: [-1, 0]
```

## Key Idea
Note if we perform a bitmask XOR all the elements, at the end, we will have a bitmask containing bits for both number that appears exactly once. However, note since those two numbers are different, it must have 1 bit different. Thus, let `diff = bitmask & (-bitmask)` which will only keeps the rightmost 1-bit and set all other bits to 0. And this 1 bit must be either the first unique number of the second unique number but not both.

Then we can simply iterate over the number again and then XOR the number if it has this bit set to 1. At the end, this bitmask will be one of the unique number.
- It will not contain bits for other unique number because it does not have this bit (`diff`) set to 1.
- All other numbers that has this bit (`diff`) set to 1 will appear twice and thus get cancelled.

Note `bitmask` now contains bits for two unique number, if we XOR one of the unique number, then it will left with another unique number and thus we have the final solution.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)