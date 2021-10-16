## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## Rod Cutting
Given a rod of length n inches, and a table of prices Pi for i = 1, 2, ..., n, determine the maximum revenue obtainable by cutting up the rod and selling the price.

## Optimal Substructure
Notice this problem exhibits the optimal substructure. Once we make the first cut, we may consider the two pieces as independent instances of the rod cutting problem. The overall optimal solution incorporates optimal solutions to the two subproblems.

## Example
Let n = 5 and let the table of prices be

| i | 1 | 2 | 3 | 4 | 5 |
| ----- | --- | --- | --- | --- | --- |
| P(i) | 5 | 7 | 10 | 13 | 17 |

If we don't cut the rod, we get a value of 17.

If we cut the rod at index 1, we get two pieces of length 1 and length 4, giving a total of value of 5 + 13 = 18.

If we cut the rod at indices 1 and 3, we get three pieces of lengths 1, 2, and 2, giving a total value of 5 + 7 + 7 = 19.

Notice this problem exhibits overlapping subproblems.

## Recurrence Relation
Our idea is if we have a rod with length j. We will cut the at i and sell the first part, so P[i] and solve the right part optimally as a subproblem. But why don't we solve the left part as a subproblem as well? We will loop over the all possible cut we can make and thus we will reach to one possible cut such that left part has optimal value and we solve the right part optimally as a subproblem.

Let OPT[j] be
- max(P[i] + OPT[j - i]) for 1 <= i <= j if j > 0
- 0 if j = 0

## Pseudocode
```
procedure CutRod(P, n)
    define M[0 ... n] and S[0 ... n]
    M[0] = 0
    for j from 1 to n do
        q := -infinity
        for i from 1 to j do
            if q < P[i] + M[j - i] do
                q = P[i] + M[j - i]
                S[j] = i # cut at this length
        M[j] = q
    return M[n]
```

## Complexity Analysis
- **Runtime Complexity**: O(n^2)
- **Space Complexity**: O(n)

## Solution
- [Python Solution](rod_cutting.py)

