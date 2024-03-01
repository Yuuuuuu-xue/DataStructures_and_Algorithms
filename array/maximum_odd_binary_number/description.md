# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Question
Easy 2864

## Problem
You are given a binary string `s` that contains at least one `'1'`. 

You have to rearrance the bits in such a way that the resulting binary number is the maximum odd binary number that can be created from this combination.

Return a string representing the maximum odd binary number that can be created from the given combination.

Note that the resulting string can have leading zeros.

## Example
```
Input: s = "010"
Output: "001"

Input: s = "0101"
Output: "1001"
```

## Key Idea
Simply count the number of ones and zeroes, let `numOnes` be number of ones and `numZeroes` be number of zeroes. Then, return the string as `numOnes - 1` of ones followed by the `numZeroes` of zeroes and then followed by last one.

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)