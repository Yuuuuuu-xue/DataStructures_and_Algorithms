## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1231

## Description
You have one chocolate bar that consists of some chunks. Each chunk has its own sweetness given by the array `sweetness`. You want to share the chocolate with your `k` friends so you start cutting the chocolate bar into `k + 1` pieces using `k` cuts, each piece consists of some consecutive chunks. Being generous, you will eat the piece with the minimum total sweetness and give the other pieces to your friends. Find the maximum total sweetness of the piece you can get by cutting the chocolate bar optimally. 

## Example
```
Input: sweetness = [1, 2, 3, 4, 5, 6, 7, 8, 9], k = 5
Output: 6
Explanation: You can divide the chocolate to [1, 2, 3], [4, 5], [6], [7], [8], [9]

Input: sweetness = [5, 6, 7, 8, 9, 1, 2, 3, 4], k = 8
Output: 1
Explanation: There is only one way to cut the bar into 9 pieces

Input: sweetness = [1, 2, 2, 1, 2, 2, 1, 2, 2], k = 2
Output: 5
Explanation: You can divide the chocolate to [1, 2, 2], [1, 2, 2] and [1, 2, 2]
```

## Basic Idea
Let `x` be the total sweetness that you can get. Notice, if you can get at least `x` sweetness, then this implies that you can get at least `x - 1`, `x - 2`, ... `0` sweetness. Therefore you can rid of at least half of the solution. This implies that we can apply the divide and conquer to solve this problem. Therefore, we can start with 0 to total number of sweetness of the chocolates, find the mid point, and veritfy if we can get at the mid point `x` sweetness,
- If we can, then we can move the pointer to (mid, right] and update the solution to mid since we can guarnatee that mid works.
- If we cannot, then we can move the pointer to [left, mid).

However, for given `x`, how can we check if we can divide the chocolate into k pieces such that everyone get at least `x` sweetness. We can simply loop over the `sweetness` array, accumulate the total sweetness so that if curr sweetness >= x, we cut the next piece to the next person. At the end, we can vertify if total number of persons get at least x sweetness >= k.

Note, the minimum sweetness that you can get is the minimum value of the given array and the maximum (optimal) sweetness that you can get is the average sweetness that everyone can get.

## Solution
- [C++](./solution.cpp)