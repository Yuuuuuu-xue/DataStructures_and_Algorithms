## LeetCode Problem
Medium 271

## Description
Design an algorithm to enccode a list of strings to a string. The encoded string is then sent over the network and is decoded back to the original list of strings.

## Basic Idea
We can store the length of each string with a separator i.e. a dot '.' follow by the actual string. Therefore, when decodeing, we will read the length before the first dot and then append the actual string with the length, and simply repeat the pattern.

## Solution
- [C++](./solution.cpp)