## LeetCode Question
Medium 1404

## Description
Given the binary representation of an integer as a string `s`, return the number of steps to reduce it to `1` under the following rules:
- If the current number is even, you have to divide it by `2`
- If the current number if odd, you have to add `1` to it

## Example
```
Input: s = "1101"
Output: 6
Explanation:
- s = "1101", since last digit is 1 thus odd, so we add 1 to get "1110"
- s = "1110", since last digit is 0 thus even, so we divide it by 2 to get "0111" (divide it by 2 is same as right shit)
- s = "0111", since last digit is 1, thus odd, so we add 1 to get "1000"
- s = "1000", since last digit is 0, thus even, so we divide it by 2 to get "0100"
- s = "0100", since last digit is 0, thus even, so we divide it by 2 to get "0010"
- s = "0010", since last digit is 0, thus even, so we divide it by 2 to get "0001"

Reach to 1 thus 6.
```

## Key Idea
For this question, we can simply modify the string to solve the problem. We check if the last digit is 1 or 0:
- If it is `0`, then we can perform a rightshift, notice for the string, we will need to shift every character which will require O(n). However, since last digit is 0 and we pefrom right shift, it is equilvanet to just pop last item out.
- If it is `1`, then we need to set last bit to 1 and find the a bit that is 0 and set to 1, if bit is 1, then set to 0. If all the bits are 1, then we set all the bits to 0 and insert 1 at the beginning (since we pop a character out).
  
Repeat the process until the input string is "1".

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(1) (we will modify the input string directly)
 
## Solution
- [C++](solution.cpp)