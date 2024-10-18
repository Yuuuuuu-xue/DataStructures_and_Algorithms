## Backtracking
Click [here](../notes.md) to go back to the notes page.

## Problem
Given an integer array `nums`, find the maximum possible bitwise OR of a subset of `nums` and return the number of different non-empty subsets with the maximum bitwise OR.

An array `a` is a subset of an array `b` can be obtained from `b` by deleting some (possibly zero) elements of `b`. Two subsets are considered different if the indices of the elements chosen are different.

The bitwise OR of an array `a` is equal to `a[0] OR a[1] OR ... OR a[a.length - 1]` (0 indexed).

## Example:
```
Input: nums = [3, 1]
Output: 2
Explanation: The maximum possible bitwise OR of a subset is 3. there are two subsets with a bitwise OR of 3:
- [3]
- [3, 1]
```

## Key Idea
Since bitwise OR, we can simply OR all the elements to retrieve the maximum possible value.

Then we can use backtracking to find out all the possible sub arrays and update the counter if we retrieve the maximum OR value.

## Complexity Analysis
- Runtime Complexity: O(n + 2^n)
- Space Complexity: O(n)

## Solution
- [Java Solution](letter_combinations_of_a_phone_number.java)
- [C++ Solution](./solution.cpp)