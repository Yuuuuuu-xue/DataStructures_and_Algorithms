## Trie
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3043

## Problem
You are given two arrays with positive integers `arr1` and `arr2`.

A preficx of a positive integer is an integer formed by one or more of its digits, starting from its leftmost digit. For example, `123` is a prefix of the integer `12345`, while `234` is not.

A common prefix of two integers `a` and `b` is an integer `c` such that `c` is a preficx of both `a` and `b`. For example, `5655359` and `56554` have a common prefix `565` while `1223` and `43456` do not have a common prefix.

You need to find the length of the longest common prefix between all pairs of integers `(x, y)` such that `x` belongs to `arr1` and `y` belongs to `arr2`.

Return the length of the longest common prefix among all pairs. If no common prefix exists among them, return `0`.

## Example
```
Input: arr1 = [1, 10, 100], arr2 = [1000]
Output: 3
Explanation: there are 3 pairs
- The longest common prefix of (1, 1000) is 1
- The longest common prefix of (10, 1000) iss 10
- The longest common prefix of (100, 1000) is 100
The longest common prefix is 100 with a length of 3
```

## Key Idea
We cannot generate all pairs and check for longest prefix because it will end up with TLE. We can loop over one array and have an efficient way to check the longest prefix for all the numbers in other array. Since we want to know the prefix, to achieve that, we can simply use a trie to solve this problem.

We loop over the first array and build the trie. Then loop over the second array and find the prefix length in the trie.

## Complexity Analysis
- Runtime Complexity: O(n + m)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)