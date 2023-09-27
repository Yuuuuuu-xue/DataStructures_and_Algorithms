# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 880

## Problem
You are given an encoded string `s`. To decode the string to a tape, the encoded string is read one character at a time and the following steps are taken:
- If the character read is a letter, that letter is written on the tape
- If the character read is a digit `d`, the entire current tape is repeatedly written `d - 1` more times in total

Given an integer `k`, return the `kth` letter (`1-indexed`) in the decoded string

## Example:
```
Input: s = "leet2code3", k = 10
Output: "o"
Explanation: The decode string is "leetleetcodeleetleetcodeleetleetcode", the 10th character of the string is 'o'

Input: s = "ha22", k = 5
Output: "h"
Explanation: The decoded string is "hahahaha" and 5th character of the string is 'h'

Input: s = "a2345678999999999999999", k = 1
Output: "a"
Explanation: The decoded string is "a" repeated 8301530446056247680 times. The first letter is "a"
```

## Key Idea
In the last example, it's pretty clear that brute force will result in TLE or MLE. We know that when we reach to the size that we are looking for, we don't need to continue decode. Let `decodeSize` be the size that while `s < k`, we decode the character at index `i`. Then
- If `s[i]` is a number, `decodeSize *= s[i]` since we rewrite the tape `d - 1` more times in total
- If `s[i]` is a character, `decodeSize += 1` since we just copy that letter

Once we have the `decodeSize` and index `i` is the last index we decode. We can loop back and check:
- If `s[i]` is a number, this means we rewrite the tap `d - 1` more times, then we know before we decode the character at `s[i]`, the length is `decodeSize / s[i]`. And `k` will be `k % decodeSize`.
- If `s[i]` is a character, then if `k == n or k == 0`, then we find the solution. If not, then simply undecode this character and thus update the size `decodeSize -= 1`
 
## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)