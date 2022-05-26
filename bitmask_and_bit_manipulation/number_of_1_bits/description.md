## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 191

## Problem
Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight). 

## Example
```
Input: n = 00000000000000000000000000001011
Output: 3
Explanation: The input number's binary representation is 00000000000000000000000000001011 and it has a total of three '1' bits.

Input: n = 00000000000000000000000010000000
Output: 1
Explanation: The input number's binary representation is 00000000000000000000000010000000 and it has a total of one '1' bit.

Input: n = -3
Output: 31
Explanation: The input number's binary representation is 11111111111111111111111111111101 and it has a total of thirty one '1' bits.
```

## Key Idea
We can simply get the binary representation of the input number and count the number of '1' bits. But there is a more efficient way to solve this problem. Note, for any binary representation of an integer n, 100111011, we can loop over all it's 1 bits string by set n &= n - 1. For instance, the binary representation of n - 1 is 10011101, then we n & n - 1 = 100111010, so we successfully set the left most '1' bit to 0. Now if we repeat the process, n - 2 will be 100111001 and n - 1 & n - 2 (notice we turn some bits to 1 for n - 2 but for n - 1 they are all 0 bits, thus & will set it to 0), and we have 100111000. If repeat it again, n - 3 will be 100110111. And n - 2 & n - 3 will be 100110000. We can simply repeat the process until it equals to 0 and we count the number of times it take and it will be our final answer.

## Solution

