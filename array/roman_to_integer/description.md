# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 13

## Problem
Roman numberals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D`, `M`.
```
Symbol  Value
I       1
V       5
X       10
L       50
C       100
D       500
M       1000
```
For example, `2` is written as `II` in Roman numeral, just two ones added together. `12` is written as `XII`, which is simply `X + II`. The number `27` is writen as `XXVII`, which is `XX + V + II`.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`. Instead, the number four is written as `IV`. Because one is before the give, we subtract it making four. The same principle applies to the number nine, which is written as `IX`. There are six instances where substraction is used:
- `I` can be placed before `V` and `X` to make 4 and 9
- `X` can be placed before `L` and `C` to make 40 and 90
- `C` can be placed before `D` and `M` to make 400 and 900

Given a roman numeral, convert it to an integer.

## Example
```
Input: s = "III"
Output: 3

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V = 5, III = 3

Input: s = "MCMXCIV"
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4
```

## Key Idea
Notice, if we do not have subtraction role, then we can simply loop over each character and accumuate the sum. However, note, for the subtraction role, it is always a smaller number occurs before a larger number, then we make a subtraction role. Then we can simply loop over each character backward. For any character `curr`, we also have a prev character `prev`, if `prev > curr`, then we applied a subtraction role otherwise addition.

## Solution
- [C++](solution.cpp)