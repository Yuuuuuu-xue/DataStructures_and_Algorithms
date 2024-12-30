## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2466

## Problem
Given the integers `zero`, `one`, `low` and `high`, we can construct a string by starting with an empty string, and then at each step perform either of the following:
- Append the character `'0'` `zero` times
- Append the character `'1'` `one` times

This can be performed any number of times.

A good string is a string constructed by the above process having a length between `low` and `high` (inclusive).

Return the number of different good strings that can be constructed satisfying these properties. Since the answer can be large, return it modulo `10 ** 9 + 7`.

## Example:
```
Input: low = 3, high = 3, zero = 1, one = 1
Output: 8
Explanation: Any binary string of length 3 works.
```

## Key Idea
Note, suppose we are looking for number of different good strings of length `n`. Then we can simply find the number of different good strings of length from `low` to `high`, both inclusive.

Now, if we are looking for different good strings of length `n`, then we can
- append `0` `zero` times, then we can look for the solution `n - zero`
- append `1` `one` times, then we can look for the solution `n - one`


## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)