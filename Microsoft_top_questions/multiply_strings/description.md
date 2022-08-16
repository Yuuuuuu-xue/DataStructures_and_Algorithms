## LeetCode Question
Medium 43

## Description
Given two non-negative integers `num1` and `num2` represented as strings, return the product of `num1` and `num2`, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

## Example
```
Input: num1 = "2", nums2 = "3"
Output: "6"

Input: num1 = "123", num2 = "456"
Output: "56088"
```

## Key Idea
Traverse 1 string and apply the multiplication for each digits for another string, then return the string. Then we need to perform a string addition for each number otherwise the integers may overflowing and exceeds the maximum limit.

## Complexity Analysis
- Time complexity: O(n * m) where n is num1.size() and m is num2.size()
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)