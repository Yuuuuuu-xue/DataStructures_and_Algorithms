## LeetCode Question
Medium 8

## Description
Implement the `myAtoi(string s)` function, which converts a string to a 32-bit signed integer (similar to C/C++'s `atoi` function).

The algorithm for `myAtoi(string s)` is as follows:
- Read in and ignore any leading whitespace.
- Check if the next character (if not already at the end of the string) is `-` or `+`. Read this character in if it is either. This determines if the final result is negative or positive respectigvely. Assume the result is positive if neither is present.
- Read in next the characters until the next non-digit character or the end of the input is reached. The rest of the string is ignored.
- Convert these digits into an integer (i.e. `"123" -> 123`. `"0032" -> 32`). If no digits were read, then the integer is `0`. Change the isgn as necessary from step 2.
- If the integer is out of 32-bit signed integer range `[-2^31, 2^31 - 1]`, then clamp the integer so that it remains in the range. Specifically, integers less than `-2^31` should be clamped to `-2^31`, and integers greater than `2^31 - 1` should be clamped to `2^31 - 1`.
- Return the integer as the final result.

## Example
```
Input: s = "42"
Output: 42

Input: s = "      -42"
Output: -42

Input: s = "4193 with words"
Output: 4193
```

## Key Idea
We can simply follow the role. First of all, skip all the spaces. Then check if the next character is `+` or `-`. If so, record it. Then we will try to find the substring that contains only digits (ignore leading 0) and no other characters. Then use the range to build the integer. For instance, if we have `"1234"`, then `o = 1 * 1000 + 2 * 100 + 3 * 10 + 4 * 1`.

However, there is an edge case. What if the integer is out of 32-bit signed integer range? We know that the minimum integer we can store is `-2^31` and maximum integer we can store is `2^31 - 1` where `2^31 = 2147483647`. We can check if the first digit is < 2000000000, if so we then this digits is within the range, if > then simply return the limit, if =, then we need to check for the next digit.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)