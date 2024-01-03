# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2125

## Problem
Anti-theft security devices are activated inside a bank. You are given a 0-indexed binary string array `bank` representing the floor plan of the bank, which is an `m x n` 2D matrix. `bank[i]` represents the `ith` row, consisting of `0` and `1`'s. `0` means the cell is empty while `1` means the cell has a security device.

There is one laster beam between any two security devices if both conditions are met:
- The two devices are located on two different rows
- For each row `i` where `r1 < i < r2`, there are no security devices in the ith row

Laser beams are indendent, i.e. one beam does not interfere nor join with another.

Return the total number of laser beams in the bank.

## Examples:
```
Input: bank =
["011001",
 "000000",
 "010100",
 "001000"]
Output: 8
Laser beams between first row and third row, which has 3 * 2 = 6, the third row and fourth row, which has 2 * 1 = 2, thus total of 8.
```

## Basic Idea
Simply keep track of number of security devices for the first two row, skip the row with 0 beam. Then calculate the number of security beams.

## Complexity Analysis
- Runtime Complexity: O(n * m)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
