## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 455

## Problem
Assume you are an awesome parent and want to give your children some cookies. Buy, you should give each child at most one cookie.

Each child `i` has a greed factor `g[i]`, which is the minimum size of a cookie that the child will be content with; and each cookie `j` has a size `s[j]`. If `s[j] >= g[i]`, we can assign the cookie `j` to the child `i`, and child `i` will be content. Your goal is to maximize the number of your content children and output the maximum number.

## Example:
```
Input: g = [1, 2, 3], s = [1, 1]
Output: 1
Explanation: 3 children and 2 cookies, can only satisfy one child.

Input: g = [1, 2], s = [1, 2, 3]
Output: 2
```

## Key Idea
The greedy strategy is to assign the smallest cookie to the children with smallest greedy factor. Thus, sort both `g` and `s` and use two pointers to solve this problem.

## Complexity Analysis
- Runtime Complexity: O(n lg n + m lg m)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
