## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
Medium 452

## Problem
There are some spherical balloons taped onto a flat wall that represents the XY-plane. The balloons are represented as a 2D integer array `points` where `points[i] = [x_start, x_end]` denotes a balloon whose horizontal diameter stretches between `x_start` and `x_end`. You do now know the exact y-coordinates of the balloons.

Arrows can be shot up directly vertically (in the positive y-direction) from different points along the x-axis. A balloon with `x_start` and `x_end` is burst by an arrow shot at `x` is `x_start <= x <= x_end`. There is no limit to the number of arrwos that can be shot. A shot arrow keeps traveling up infionitelyt, bursting any balloons in its path.

Given the array `point`, return the minimum number of arrows that muyst be shot to burst all balloons.

## Example
```
Input: points = [[10,16],[2,8],[1,6],[7,12]]
Output: 2
Explanation: The balloons can be burst by 2 arrows:
- Shoot an arrow at x = 6, bursting the balloons [2,8] and [1,6].
- Shoot an arrow at x = 11, bursting the balloons [10,16] and [7,12].
```

## Key Idea
This can be solved with a greedy strategy. We can shot the first balloon's `x_end` position and remove all ballons that also be brusted with this arrow. Repeat the same step until there is no balloons left.

Thus, we need to sort the balloons based on `x_end`.

## Solution:
- [C++](./solution.cpp)
