## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
Medium 1338

## Problem
You are given an integer array `arr`. You can choose a set of integers and remove all the occurrences of these integers in the array. Return the minimum size of the set so that at least half othe integers of the array are removed.

## Example
```
Input: arr = [3, 3, 3, 3, 5, 5, 5, 2, 2, 7]
Output: 2
Explanation: remove {3, 7} will make the new array [5, 5, 5, 2, 2] which has szie 5. Possible sets of size 2 are {3, 5}, {3, 2}, {5, 2}.

Input: arr = [7, 7, 7, 7, 7, 7]
Output: 1
```

## Key Idea
Let `m` be a map that maps the frequency to a list of integers that has this frequency. Then, we can simply apply a greedy approach that removes the highest frequency each time until we reach to at least half of the size are removed.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution:
- [C++](solution.cpp)
