## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1544

## Problem
Given a strign `s` of lower and upper case English letters.

A good string is a string which doesn't have two adjacent characters `s[i]` and `s[i + 1]` where:
- `0 <= i <= s.length - 2`
- `s[i]` is a lower-case letter and `s[i + 1]` is the same letter but in upper-case or vice-versa.

To make the string good, you can choose two adjacent characters that make string bad and remove them. You can keep doing this until the string becomes good.

Return the string after making it good. The answer is guaranteed to be unique under the given constraints.

Notice that an empyt string is also good.

## Example
```
Input: s = "leEetcode"
Output: "leetcode"
Explanation: The string "eE" is removed.

Input: s = "abBAcC"
Output: ""
```

## Key Idea
Note the second example provides a key idea to solve this problem. When we remove `bB`, then `a` and `A` becomes a bad pair which provides us a hint to solve this problem using a stack. We push an element to the stack and pop it when it is bad element to the top of the stack.

At the end, we concatenate all the elements into a string and return it.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
