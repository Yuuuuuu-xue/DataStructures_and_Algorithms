# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Question
Medium 3228

## Problem
You are given a binary string `s`.

You can perform the following operations on the sstring any number of times:
- Choose any index `i` form the string where `i + 1 < s.length` such that `s[i] == '1'` and `s[i + 1] == '0'`.
- Move the character `s[i]` to the right until it reaches the end of the string or another `'1'`. For example, for `s = "010010"`, if we choose `i = 1`, the resulting string will be `s = "000110"`.

Return the maximum number of operations that you can perform.

## Example
```
Input: s = "1001101"
Output: 4
Explanation: We can perform the following operations:
- Choose index i = 0. The resulting string is s = "0011101"
- Choose index i = 4. The resulting string is s = "0011011"
- Choose index i = 3. The resulting string is s = "0010111"
- Choose index i = 2. The resulting string is s = "0001111"
```

## Key Idea
The key idea is to move string with smallest possible index first.

If we see "1011", we will move 1 at index 0 to the right.

However, if we have this case, "1110", then we cannot move index 0, we need to move the index at 2. Then move index 1, then 0.

Thus, it provides a hint that we will move consecutive ones to the right. Then, we build the new group and continue to move if we see a 0.

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)