## Backtracking
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium

## Problem
A valid IP address consists of exactly four integers separated by single dots. Each integer is between `0` and `255` (inclusive) and cannot have leading zeros.
- For example, `"0.1.2.201"` and `"192.168.1.1"` are valid IP addresses, but `"0.011.255.245"`, `"192.168.1.312"`, and `"192.168@1.1"` are invalid IP addresses.

Given a string `s` containing only digits, return all possible valid IP addressses that can be formed by inserting dots into `s`. You are not allowed to reorder or remove any digits in `s`. You may return the valid IP addressses in any order.

## Example:
```
Input: s = "25525511135"
Output: ["255.255.11.135", "255.255.111.35"]
```

## Key Idea
Let's define a recursion and takes in the number of dots left and current ip addresses and keep build the ip addresses. We use the array of list of numbers to represent the ip addresses. Then we can try to modify the last nuber if ip address or new one if there is an ip address. If last number is 0 then we cannot append since cannot have leading zero.

## Complexity Analalysis
- Let `n` be the overall recursive calls for each recursion and `k` be the maximum depth of the recursion, the overall runtime is `O(n ^ k)`.
- n will be 3 since the number cannot be more than 255.
- k will be the number of length
- Runtime Complexity: O(3^k)
- Space Complexity: O(k)

## Solution
- [Python](./solution.py)