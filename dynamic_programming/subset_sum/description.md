## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## Subset Sum
Given n items {1, ..., n} each with a non-negative weight wi, and a bound W, find a subset S of the items so that the $\sum_{i \in S} w_i \leq W$ and, subnject to this restriction, $\sum{i \in S} w_i$ is as large as possible.

## Example 
If we have n = 5, and each $w_i$ as:
- $w_1$: 2
- $w_2$: 3
- $w_3$: 4
- $w_4$: 2
- $w_5$: 11

then if W = 5, we have 5 as our output since 2 + 3 = 5,
if W = 10, we have 2 + 3 + 4 = 9 as our output.

## Optimal Substructure
Let $\mathcal{O}$ be the optimal solution, OPT[i, w] be the best possible solution using a subset of items from {1, ..., i} and bound w.

We have two cases:
- If $i \notin \mathcal{O}$, then we know that OPT[i, w] will not need to include i and thus bound is not changed, so OPT[i, w] = OPT[i - 1, w]. 
- If $i \in \mathcal{O}$, then we know that OPT[i, w] will include i, so we need to search the subproblem of i - 1 with bound $w - w_i$. And we need add $w_i$ to the OPT[i, w].


Finally, we conclude the optimal substructure to be $OPT[i, w] = max\{OPT[i - 1, w], w_i + OPT[i - 1, w - w_i]\}$ if $w_i \leq w$, $OPT[i - 1, w]$ if $w_i > w$, else 0. 

## Pseudocode
```
procedure SubsetSum(n, w_1, w_2, ..., w_n, W)
    define a 2-D array M[0 ... n, 0 ... W]
    for w from 0 to W do
        M[0, w] = 0
    for i from 1 to n do
        for w = 0 to W do
            if w < w_i then 
                M[i, w] = M[i - 1, w]
            else
                M[i, w] = max(M[i - 1, w], w_i + M[i - 1, w - w_i])
    return M[n, w]
```

## Runtime Analysis
- **Time complexity**: $\Theta(nW)$, notice it depends on an input $W$, known as **Pseudo-polynomial time complexity**
- **Space complexity**: $\Theta(nW)$
  
## Solution
- [Python Solution](subset_sum.py)

