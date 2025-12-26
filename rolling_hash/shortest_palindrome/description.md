## Rolling Hash
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 214

## Problem
You are given a string `s`. You can convert `s` to a palindrome by adding characters in front of it.

Return the shortest palindrome you can find by performing this transformation.

## Example
```
Input: s = "abcd"
Output: "dcbabcd"
```

## Key Idea
We can use a rolling hash based algorithm to solve this problem.

Although the original solution is designed to solve for a fixed hash window. However, it can also be useful to compute the hash value and keep building the prefix and suffix efficiently.

For this problem, we can compare the hash values of the prefixes from the original string with the hash values of the suffixes from the reversed string. when the hash values match, it indicates the corresponding substrings are identical. This helps us to find the longest palindromic prefix.

For this algorithm, we fix the hashBase to `29` and `modValue` to `10**9 + 7` to be two prime numbers.

Let `forwardHash` and `reverseHash` to be initialized as `0` and represent the hashed value of the prefix and suffix.

For each iteration, we compute
- `forwardHash` = `(forwardHash * hashBase + (currentCharacter - 'a' + 1)) % modValue`
- `reverseHash` = `(reverseHash + (currCharacter - 'a' + 1) * powerValue) % modValue`
- Update `powerValue` for the next value as `(powerValue * hashBase) % modValue`
- If `forwardHash` matches `reverseHash`, update `palindromeEndIndex` to current index `i`
- After the loop, find the suffix from `s` starting from `palindromeEndIndex + 1` to the end and reverse the suffix to prepare for prepending.

The formula for forwardHash and reverseHash are:
- forwardHash is the regular hash formula:
 - h = (c1 * p^(k - 1) + c2 * p^(k - 2) + ... ck * p^0) mod m

 - When we add a new forwarded character:
 h = (h * p + c_(k + 1)) % m
   = ((c1 * p^(k - 1) + c2 * p^(k - 2) + ... c_(k - 1) * p + ck) * p + c_(k + 1)) mod m
   = c1 * p^k + c2 * p^(k - 1) + ... c_k * p + c_(k + 1) mod m
- reverseHash is:
 - h = (ck * p^(k - 1) + c(k - 1) * p^(k - 2) + ... + c1 * p^0) mod m
 - h = (c_(k + 1) * p^k + h) % m
     = (c_(k + 1) * p^k + c_k * p^(k - 1) + ... + c2 * p + c1) mod m

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)