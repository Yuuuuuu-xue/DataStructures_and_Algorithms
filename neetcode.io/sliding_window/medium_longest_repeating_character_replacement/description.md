## LeetCode Problem
Medium 424

## Description
You are given a string `s` and an integer `k`, you can choose any character of the string and change it to an other uppercase English character. You can perform this operation at most `k` times.

Return the length fo the longest substring containing the same letter you can get after performing the above operations.

## Example
```
Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace the two 'A's with two 'B's or vice versa.

Input: s = "AABABBA", k = 1
Output: 4
Explanation: Replace the one 'A' in the middle with 'B' and form "AABBBBA".
The substring "BBBB" has the longest repeating letters, which is 4.
```

## Basic Idea
Let `i` be a pointer that represents the left side of the window. Let `j` be a pointer that represents the right side of the window. Let `m` be a map that maps character to occurrence of the characters in the window. Let `maxOccurrence` be the upperbound of the number of occurrence of any character in the window (so that all the characters will be converted into the character with this occurrence). Then, for each iteration, we check:
- s[i] == s[j], then update m and maxOccurrence if necessary
- s[i] != s[j] and j - i + 1 - maxOccurrence = number of characters needed to be converted into other charactesrs and this value is <= k, then we update m and maxOccurrence if nessary
- s[i] != s[j] and j - i + 1 - maxOccurrence > k, then we need to move the window by increment i by 1 and update m. We do not update maxOccurrence in this case since it's an upper bound in the window. So this means there is a window with this upperbound and thus it works.

At the end, the window size will be our final solution. 

## Solution
- [C++](./solution.cpp)  