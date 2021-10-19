## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## Problem
Given two strings *word1* and *word2*, retur nthe minimum number of operations required to convert *word1* to *word2*.

You have the following three operations permitted on a word:
- insert a character
- delete a character
- replace a character

## Example
```
Input: word1 = "horse", word2 = "ros"
Output: 3

Explanation:
horse -> rorse, replace h with r
rorse -> rose, remove r
rose -> ros, remove e
```

## Key Idea 
Let OPT[i, j] be the minimum number of operations required to convert word1 to word2 such that word1[:i] == word2[:j]. We know that if i = m + 1 where m = len(word1) and j = n + 1 where n = len(word2), then OPT[i, j] = 0 since we are done.

If i < m + 1 and j = n + 1, then we have to call delete.

if i = m + 1 and j < n + 1, then we have to call insert.

Otherwise, if we have i < m + 1 and j < n + 1, we can call insert, delete, or replace, depends which one will use less opeerations. 

- If we call insert, then the next move will be i, j + 1, since we insert a character that is same as j, so increment j by 1
- If we call delete, then the next move will be i + 1, j, since we remove a character for word1 which is similar to skip this one and compare the next, and so i + 1
- If we call replace, then the next move will be i + 1, j + 1.

Our final solution will be OPT[1, 1] so what we start with.

Notice, if word1[i] == word2[j], then we do not call replace and should move to i + 1, j + 1.

Thus our final recurrence, OPT[i, j]
- = 0 if i = m + 1 and j = n + 1
- = 1 + OPT[i, j + 1] if i = m + 1 and j < n + 1, call insert
- = 1 + OPT[i + 1, j] if i < m + 1 and j = n + 1, call delete
- = 1 + min(OPT[i + 1, j], OPT[i, j + 1], OPT[i + 1, j + 1]) if i < m + 1 and j < n + 1 and word1[i] != word2[j]
- = OPT[i + 1, j + 1] if i < m + 1 and j < n + 1 and word1[i] == word2[j]
- $\infin$ otherwise

## Solution
- [Python Solution](edit_distance.py)


