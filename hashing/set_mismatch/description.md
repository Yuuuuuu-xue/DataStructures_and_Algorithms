## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 645

## Problem
You have a set of integers `s`, which originally contains all the numbers from `1` to `n`. Unofrtunately, due to some error, one of the numbers in `s` got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array `nums` representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

## Example
```
Input: nums = [1, 2, 2, 4]
Output: [2, 3]

Input: nums = [1, 1]
Output: [1, 2]
```

## Key Idea
Use a hash set to keep track of visited element, then we can easily find the duplicate element.

While iterating over the element, also keep the sum of that element. Then the sum from `1 to n = n (n + 1) / 2 - sum - duplicate element` is the element that is missing. 

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)