## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1531

## Problem
Run-length encoding is a string compression method that words by replacing consecutive identical characters (repeated 2 or more times) with the concatenation of the character and the number marking the count of the characters (length of the run). For example, to compress the string `"aabccc"` we replace `"aa"` by `"a2"` and `"ccc"` by `"c3"`. Thus the compressed string becomes `"a2c3"`.

Notice that in this problem, we are not adding `'1'` after single characters.

Given a string `s` and an integer `k`. You need to delete at most `k` characters from `s` such that the run-length encoded version of `s` has minimum length.

Find the minimum length of the run-length encoded version of `s` after deleting at most `k` characters.
 
## Example
```
Input: s = "aaabcccd", k = 2
Output: 4
Explanation: The most optimal way is to delete 'b' and 'd', and thus the compressed string will be "a3c3" with a length of 4.

Input: s = "aabbaa", k = 2
Output: 2
Explanation: THe most optimal way is to delete "bb" and left with "aaaa" and thus compressed string will be "a4" with a length of 2.

Input: s = "aaaaaaaaaaa", k = 0
Output: 3
Explanation: Compressed string is "a11"
```

## Key Idea
We will solve this problem via dynamic programming. Let `dp[i][j]` be the optimal length of a string with current index `i` and `j` characters to delete.

Thus, `dp[n][k]` will be the solution that we are looking for.

Given `i` and `j`, then `dp[i][j] =`
- We can choose to keep current character at index `i`
- We can choose to remove current character at index `i`

Then at index `i`, we can simply loop back `idx = i` to `0`. If `dp[idx] != dp[i]`, then we can remove the character at index `idx` and thus increment a counter `needToRemove`. If not, then they are in the same group as the `dp[i]` and we try to remove all other characters in between `dp[idx]` and `dp[i]` that is not equal to `dp[i]`.

## Complexity Analysis
- Runtime Complexity: O(n * n * k)
- Space Complexity: O(n * k)

## Solution
- [C++](./solution.cpp)