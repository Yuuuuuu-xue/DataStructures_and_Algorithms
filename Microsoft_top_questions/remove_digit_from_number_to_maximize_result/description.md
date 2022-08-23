## LeetCode Question
Easy 2259

## Description
You are given a string `number` representing a positive integer and a character `digit`. Return the resuling string after removing exactly one occurrence of `digit` from `number` such that the value of the resulting string in decimal form is maximized. The test case are generated such that `digit` occurs at least once in `number`.

## Example
```
Input: number = "123", digit = "3"
Output: "12"
Explanation: there is only one '3' in "123". After removing '3', the result is "12"

Input: number = "1231", digit = "1"
Output: "231"
Explanation: we can remove the first '1' to get "231" or remove the second '1' to get "123". Since 231 > 123, we return "231"

Input: number = "551", digit = "5"
Output: "51"
Explanation: we can remove either the first or second '5' from "551". Both result in the string "51".
```

## Key Idea
Note, if we try to remove the digit from left to right and at index `i`, if `s[i]` < `s[i + 1]`, then we can immediately remove `s[i]` because we will shift a higher number to the right. If we choose the next one, then `s[i]` is still smaller than `s[i + 1]`.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)