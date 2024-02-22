## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 997

## Problem
In a town, there are `n` people labeled from `1` to `n`. There is a rumor that one of these people is secretly the town judge.

If the town judge exists, then:
1. The town judge trusts nobody
2. Everybody (except for the town judge) trusts the town judge
3. There is exactly one person that satisfies properties 1 and 2

You are given an array `trust` where `trust[i] = [a_i, b_i]` representing that the person labeled `a_i` trusts the person labeled `b_i`. If a trust relationship does not exist in `trust` array, then such a trust relationship does not exist.

Return the label of the town judge if the town judge exists and can be identified, or return `-1` otherwise.

## Example
```
Input: n = 2, trust = [[1, 2]]
Output: 2

Input: n = 3, trust = [[1, 3], [2, 3]]
Output: 3

Input: n = 3, trust = [[1, 3], [2, 3], [3, 1]]
Output: -1
```

## Key Idea
Let `m` be a map that maps the number of trusts that a person `i` gets. Thus, iterate over the loop, update `m[trust[i]] --` and `m[trust[i] ++]`.

In this case, we can just define an array with initial value 0 and without a hash map.

At the end, iterate over the map and if its value equals to n - 1, then return it.

## Runtime Complexity
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)
