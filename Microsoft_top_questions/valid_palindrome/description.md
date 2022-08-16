## LeetCode Question
Easy 125

## Description
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backwrad. Alphanumeric characters include letters and numbers.

Given a strign `s`, return `true` if it is a palindrome, or `false` otherwise.

## Example
```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome
```

## Key Idea
Let `left` and `right` be pointers with initial value `0` and `n - 1`. Then increment `left` until `s[left]` is an alphanumeric character and decrement `right` until `s[right]` is an alphanumeric character. Then compare the two, if not same, we can return false. Repeat the same process until `left >= right`, then we can return True.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)