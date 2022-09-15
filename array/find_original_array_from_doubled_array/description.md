# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2007

## Problem
An integer array `original` is transformed into a doubled array `changed` by appending twice the value of every element in `original`, and then randomly shuffling the resulting array. Given an array `changed`, return `original` if `changed` is a doubled array. If `changed` is not a doubled array, return an empty array. The elements in `original` may be returned in any order.

## Example:
```
Input: changed = [1, 3, 4, 2, 6, 8]
Output: [1, 3, 4]
Explanation: One possible original array could be [1, 3, 4]:
- twice the value of 1 is 1 * 2 = 2.
- twice the value of 3 is 3 * 2 = 6.
- twice the value of 4 is 4 * 2 = 8.
Other original arrays could be [4, 3, 1] or [3, 1, 4]

Input: changed = [6, 3, 0, 1]
Output: []
Explanation: changed is not a doubled array.
```

## Key Idea
Note if the array has odd length, then we can immediately return empty array as a base case.

Let's sort the input array in non-decreasing order and let `m` be a map that maps the element to its occurrence.

Let `curr` be the current element in the array. If `m[curr] == 0`, then this means this element is the twiced element of the previous elements and we can skip it to the next element.

If `m[curr] > 0` then we can remove it and append to the output array. Now if `m[curr * 2] > 0`, then we decrement it by 1 since it will be the doubled value. If `m[curr * 2] = 0`, then we can return an empty array because we found an element that its doubled value does not exist.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)