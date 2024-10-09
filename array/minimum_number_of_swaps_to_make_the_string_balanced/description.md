# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1963

## Problem
You are given a 0-indexed string `s` of even length `n`. The string consists of exactly `n / 2` opening brackets `'['` and `n / 2` closing brackets `']'`.

A string is called balanaced if and only if:
- It is the empty string or
- It can be writen as `AB` where both `A` and `B` are balanced strings, or
- It can be written as `[C]` where `C` is a balanced string.

You may swap the brackets at any two indices any number of times.

Return the minimum number of swaps to make `s` balanced.

## Example
```
Input: s = "][]["
Output: 1
Explanation: You can make the string balanced by swapping index 0 with index 3. Resulting string is [[]]

Input: s = "]]][[["
Output: 2
Explanation:
- Swap index 0 with index 4, s = "[]][]["
- Swap index 1 with index 5, s = "[[][]]"
```

## Key Idea
We can use a stack to keep track of the number of opening brackets, if we see a closing bracket, we pop the item from stack and if we see an opening bracket, we push it to the stack.

At the end, the length of the stack is the number of opening brackets not balanaced. Since we don't need the index of the opening brackets, we can simply use an integer counter instead of the stack.

At the end, we know the number, `x`, of opening brackets not balanced, the minimum swap will be `x / 2` because we only need to swap half of the brackets closing brackets and make the other half balanced.

Since `x` can be even or odd, we can simply use `(x + 1) // 2` as `ceil(x / 2)`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)