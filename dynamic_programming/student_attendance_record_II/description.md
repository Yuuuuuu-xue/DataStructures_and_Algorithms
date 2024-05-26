## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 552

## Problem
An attendance record for a student can be represented as a string where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:
- 'A': absent
- 'L': late
- 'P': present

Any student is eligible for an attendance award if they meet both of the following criteria:
- The student was absent ('A') for strictly fewer than 2 days total
- The student was never late ('L') for 3 or more consecutive days

Given an integer `n`, return the number of possible attendance records of length `n` that make a student eligible for an attendance award. The answer may be very large, so return it modulo `10**9 + 7`.
 
## Example
```
Input: n = 2
Output: 8
Explanation: There are 8 recods with length 2 that are eligible for an award: "PP", "AP", "PA", "LP", "PL", "AL", "LA", "LL". Only "AA" is not eligible because there are 2 absences (there need to be fewer than 2).
```

## Key Idea
We will solve this problem via dynamic programming.

Note, the number of attendance record of n equals to
- the number of attendance record of n ended with A of n (A[n]) +
- the number of attendance record of n ended with L of n (L(n)) +
- the number of attendance record of n ended with P of n (P(n))

Now, the question is simply to solve A, L, and P.

For `P[n]`, then any length of n - 1 of valid attendance record is valid. Thus `P[n] = A[n - 1] + L[n - 1] + P[n - 1]`.

For `L[n]`, we don't want to have three consecutive days of `L`. Thus, we know `L[n] = A[n - 1] + P[n - 1] + no two consecutive days of L ended of n - 1`. For character at `n - 1` to be `L` and no three consecutive `L`s, it will be
- `n - 2`th character is `P`, thus `P[n - 2]` +
- `n - 2`th character is `A`, thus `A[n - 2]` +
- `n - 2`th character is `L`, then we have `n - 1`th and `n`th both `L`, thus not valid
Thus, `L[n] = A[n - 1] + P[n - 1] + A[n - 2] + P[n - 2]`.

For `A[n]`, we cannot have two `A`. Since we know it ended with `A` by the definition of `A[n]`, thus, the number of attendance record of `n - 1` that must not contain `A`. Thus, `A[n] = P[n - 1] with no A + L[n - 1] with no A = noAP(n - 1) + noAL(n - 1)`. Thus, we need to find out `noAP` and `noAL`.

For `noAP[n]`, we know it's a valid attendance record ended with `P` or `L` with length `n - 1` and without `A`. Thus, `noAP[n] = noAP[n - 1] + noAL[n - 1]`.

For `noAL[n]`, the `n - 1` character is `P` with no `A` (i.e. `noAP[n - 1]`) or `n - 1` character is `L` and has no `A`
- If `n - 2` character is `P` aad no `A`, thus `noAP[n - 2]` +
- If `n - 2` character is `L` and no `A`, invalid since `n - 1` and `n` both are `L`s.
Thus `noAL[n] = noAP[n - 1] + noAP[n - 2]`.

Thus, total = `T[n] = A[n] + P[n] + L[n]` where
- `P[n] = A[n - 1] + P[n - 1] + L[n - 1]`
- `L[n] = A[n - 1] + P[n - 1] + A[n - 2] + P[n - 2]`
- `noAP[n] = noAP[n - 1] + noAL[n - 1]`
- `noAL[n] = noAP[n - 1] + noAP[n - 2]`
- `A[n] = noAP[n - 1] + noAL[n - 1]`

with initial value
- `A[1] = 1`
- `L[1] = 1`
- `P[1] = 1`
- `L[2] = 3` (i.e. AL, PL, LL)
- `noAP[1] = 1`
- `noAL[1] = 1`

For `A[n] when n >= 4`, we know that
```
A[n] = noAP[n - 1] + noAL[n - 1]
     = noAP[n - 2] + noAL[n - 2] + noAL[n - 1]
     = A[n - 1] + noAL[n - 1]
     = A[n - 1] + noAP[n - 2] + noAP[n - 3]
     = A[n - 1] + (noAP[n - 3] + noAL[n - 3]) + (noAP[n - 4] + noAL[n - 4])
     = A[n - 1] + A[n - 2] + A[n - 3]
``` 

Thus, `A[1] = 1`, `A[2] = 2`, `A[3] = 4`
and 

`T[n] = A[n] + P[n] + L[n]` where
- `A[n] = A[n - 1] + A[n - 2] + A[n - 3]`
- `L[n] = A[n - 1] + P[n - 1] + A[n - 2] + P[n - 2]`
- `P[n] = A[n - 1] + P[n - 1] + L[n - 1]`

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)