## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 241

## Problem
Given a string `expression` of numbers and operators, return all the possible results from computing all the different possible ways to group numbers and operators. You may return the answer in any order.

THe test cases are generated such that the output values fit in a 32-bit integer and the number of different results does not exceed `10^4`.

## Example:
```
Input: expression = "2-1-1"
Output: [0, 2]
Explanation:
((2 - 1) - 1) = 0
(2 - (1 - 1)) = 2

Input: expression = "2*3-4*5"
Output: [-34, -14, -10, -10, 10]
Explanation:
(2 * (3 - (4 * 5))) = -34
((2 * 3) - (4 * 5)) = -14
((2 * (3 - 4) * 5)) = -10
(2 * ((3 - 4) * 5)) = -10
(((2 * 3) - 4) * 5) = 10
```

## Key Idea
Notice for each operator, it may be the last operator. Then we can simply loop over the operator and calculate its left side (which may be an array of integers) and right side (which may be an array of integers) then recursively find the values of left side and right side. Then we apply the last operator to get all the possible values.

## Solution
- [C++](solution.cpp)