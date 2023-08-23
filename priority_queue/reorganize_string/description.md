## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 767

## Description
Given a string `s`, rearrange the character of `s` so that any two adjacent characters are not the same.

Return any possible rearrangement of `s` or return `""` if not possible.

## Example
```
Input: s = "aab"
Output: "aba"

Input: s = "aaab"
Output: ""
```

## Basic Idea
We will solve this problem with a greedy algorithm. The greedy strategy is to pick the most frequent character first, then pick the second most frequent character and repeat the process.

Thus let `m` be a map that maps the character to its frequency. Then we can build a priority queue of frequency and its character. Then, while `m` is not empty, we can always pull out two most frequent characters from the heap, build the output string, update frequency, then push back to the heap.

At the end, if we have one character left in the heap and its frequency is greater than 0, then it is not possible and we can return `""`.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)