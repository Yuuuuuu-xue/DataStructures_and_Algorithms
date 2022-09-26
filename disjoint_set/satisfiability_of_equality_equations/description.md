## Disjoint Set
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 990

## Description
You are given an array of strings equations that represent relationships between variables where each string `equations[i]` is of length `4` and takes one of two different forms: `"xi==yi"` or `"xi!=yi"`.Here, `xi` and `yi` are lowercase letters (not necessarily different) that represent one-letter variable names.

Return true if it is possible to assign integers to variable names so as to satisfy all the given equations, or false otherwise.

## Example
```
Input: equations = ["a==b","b!=a"]
Output: false
Explanation: If we assign say, a = 1 and b = 1, then the first equation is satisfied, but not the second.
There is no way to assign the variables to satisfy both equations.

Input: equations = ["b==a","a==b"]
Output: true
Explanation: We could assign a = 1 and b = 1 to satisfy both equations.
```

## Key Idea
Let `eq` be a disjoint set that represent equality.

Simply loop over the input array and process the equality first. If two numbers belong to the same group, then they need to be the same value.

Then loop the input array again and process the inequality. If two numbers belong to the same group and ineqality then return false.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1) since disjoint set is fixed 26 characters

## Solution:
- [C++](soluition.cpp)