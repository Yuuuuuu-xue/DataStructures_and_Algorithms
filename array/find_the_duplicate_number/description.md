# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 287

## Problem
Given an array of integers `nums` containing `n + 1` integers where each integer is in the range `[1, n]` inclusive. There is only one repeated number in `nums`, return this repeated number. You must solve this problem without modifying the array `nums` and uses only constant extra space nad linear runtime.

You can assume all the intregers in `nums` appear only once except for precisely one integer which appears two or more times.

## Example
```
Input: nums = [1, 3, 4, 2, 2]
Output: 2

Input: nums = [3, 1, 3, 4, 2]
Output: 3
```

## Key Idea
Notice there are many ways to solve this problem.
1. Using a hashset, but this requires a linear space
2. Sort the input array, but this requires O(n lg n) time complexity
3. Use input array value's as indices, but this requires to modify the input array

However, we can take advantage of the input array's value as indicies as a hint to solve problem. Suppose that if input array does not have a repeated number, then this means we can have a 1:1 function that maps the index to a value in the array. Then, in this case, we will never have a cycle such that two numbers map to the same index.

The example case:  [3, 1, 3, 4, 2] has at least one number with duplicate value 3. If we draw it out, we can see

{0, 2} -> 3,
{1} -> 1,
{3} -> 4,
{4} -> 2

Then we traverse though the index:
0 -> 3 -> 4 -> 2 -> 3 -> 4 -> 2 -> 3 ... 
Notice there is a cycle.

For any function f that maps a finite set S to itself, the sequence of iterated function values: 
x0, x1 = f(x0), x2 = f(x1), ..., x_i = f(x_(i - 1)), ...
must eventually use the same value trice.

In this case, we can use the [Floyd's tortoise and hare algorithm](https://en.wikipedia.org/wiki/Cycle_detection) to solve this question with two pointers technique.

The pseudocode:
```
def floyd(f, x0):
  # Main part the of the algorithm, the hare moves twice 
  # as qucikly as the tortoise and the distance between them
  # increases by 1 at each step. Eventually they will both be
  # inside the cycle and then at the same point.
  tortoise = f(x0)
  hare = f(f(x0))
  while tortoise != hare:
    tortoise f(tortoise)
    hare = f(f(hare))

  # Hare moving in circle one step at a time and tortoise (reset
  # to beginning) move towards the circle. They will intersect
  # at the beginning of the circle.
  tortoise = x0
  while (toritoise != hare):
    tortoise = f(tortoise)
    hare = f(hare)

  # when they meet, we found the entry point of the cycle.
```

## Solution
- [C++](./solution.cpp)
- [Python](./solution.py)