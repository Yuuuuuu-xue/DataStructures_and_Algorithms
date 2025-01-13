# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 3223

## Problem
You are given a string `s`.

You can perform the following process on `s` any number of times:
- Choose an index `i` in the string such that there is at least one character to the left of index `i` that is equal to `s[i]`, and at least one character to the right that is also equal to `s[i]`
- Delete the closest character to the left of index `i` that is equal to `s[i]`
- Delete the closest character to the right of index `i` that is equal to `s[i]`

Return the minimum length of the final string `s` that you can achieve.

## Example
```
Input: s = "abaacbcbb"
Output: 5
Explanation:
- Choose index 2 and remove characters at indicies 0 and 3. The resulting string is s = "bacbcbb"
- Choose index 3 and remove characters at indicies 0 and 5. The resulting string is s = "acbcb"
```

## Key Idea
Note, we don't need to return the string, only the length. This means we can simply store the frequency of each character in a map.

Then, for each frequency `f > 0`, we know that after deletion, `f` must be `> 0` and `< 3`. This is because `f > 0`, we cannot remove all characters. If `f >= 3`, then we can perform a deletion and reduce its length. So this means `f` has to be `1` or `2`.

If the length of the string is odd. i.e. base case, length `1`, then we can return `1` since we cannot remove. If it is some odd number `> 1`, then we can choose `3` numbers, odd - 2 = odd number. We can repeat the process until we reach to this base case.

Similarly, if the length of the string is even, i.e. base case, length `2`, then we can return `2` as well.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1) since only 26 characters

## Solution
- [Python](./solution.py)