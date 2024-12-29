## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1639

## Problem
You are given a list of strings of the same length `words` and a string `target`.

Your task is to form `target` usign the given `words` under the following rules:
- `target` should be formed from left to right
- To form the `ith` character of `target`, you can choose the `kth` character of the `jth` string in `words` if `target[i] == words[j][k]`.
- Once you use the `kth` character of the `jth` string of `words`, you can no longer use the `xth` character of any string in `words` where `x <= k`. In other words, all characters to the left of or at index `k` become unusable for every string.
- Repeat the process until you form the string `target`.

Notice that you can use multiple characters from the same string in `words` provided the conditions above are met.

Return the number of ways to form `target` from `words`. Since the answer may be too large, return it modulo `10^9 + 7`.

## Example
```
Input: words = ["acca", "bbbb", "caca"], target = "aba"
Output: 6
```

## Key Idea
We will solve this problem via top down dynamic programming.

For `ith` character at target and `kth` index at `words`. If there is any words in `words` with the same character as `target[i]` at index `k`, then it is a possible solution and we can look for the next character at next index. The number of words will multiply the number of solutions.

So let's say the number of words that has same character with `target[i]` at index `k` is `x`, then the solution adds up to `x * dp(i + 1, k + 1)`.

We can also move to `k + 1` index with `i`, thus `+ dp(i, k + 1)`.

We can simply use a lru cache to memorize the top down dp.

Now, to efficenit find the number of words that has the same character with `target[i]` at index `k`, for each index, we can simply find the frequency.

## Complexity Analysis
- Runtime Complexity:
    - n = len(target), m = len(words), x = len(words[0])
    - O(m * x) for building the frequency map
    - O(n * m) for dp
- Space Complexity: O(n * m) for the memorization

## Solution
- [Python](./solution.py)
