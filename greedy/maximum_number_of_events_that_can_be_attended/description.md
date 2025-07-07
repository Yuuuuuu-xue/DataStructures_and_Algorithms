## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1353

## Problem
You are given an array of `events` where `events[i] = [startDay_i, endDay_i]`. Every event `i` starts at `startDay_i` and ends at `endDay_i`.

You can attend an event `i` at any day `d` where `startTime_i <= d <= endTime_i`. You can only attend one event at any time `d`.

Return the maximum number of events you can attend.

## Example:
```
Input: events = [[1, 2], [2, 3], [3, 4]]
Output: 3
```

## Key Idea
A simple greedy strategy is that, at current time day `curr`, we can add all the available events to some collection. Then, at today, attend to an event that ends earliest. This provides a hint to use a priority queue to track min ending time.

To find out the events available at current day, we will sort the events by start time.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
