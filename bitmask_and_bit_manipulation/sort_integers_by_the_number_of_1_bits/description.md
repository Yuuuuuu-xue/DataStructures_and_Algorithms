## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1356

## Problem
You are given an integer array `arr`. Sort the integers in the array in ascending order by the number of `1`'s in their binary representation and in case of two or more integers have the same number of `1`'s you have to sort them in ascending order.

Return the array after sorting it.

## Example
```
Input: arr = [0, 1, 2, 3, 4, 5, 6, 7, 8]
Output: [0, 1, 2, 4, 8, 3, 5, 6, 7]
Explantion:
- [0] is the only integer with 0 bits
- [1, 2, 4, 8] all have 1 bit
- [3, 5, 6] have 2 bits
- [7] have 3 bits
```

## Key Idea
Simply let `m` be a map that maps the an integer to number of 1 bit. We can calculate it by while `curr` is not 0, if `curr` is odd then contains 1 bit, then remove the rightmost bit by right shift the bits by 1.

Then simply sort the array with the given condition.

## Complexity Analysis
- Runtime Complexity: O(n lg n), note to calculate a number has number of 1 bit takes O(1) since the number of bits is fixed
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)