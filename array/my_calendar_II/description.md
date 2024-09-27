# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 731

## Problem
You are implementing a program to use as your calendar. We can add a new event if adding the event will not cause a triple booking.

A triple booking happens when three events have some non-empty intersection (i.e. some moment is common to all three events).

The event can be represented as a pair of integers `start` and `end` that represents a booking on the half-open interval `[start, end]`, the range of real numbers `x` such that `start <= x < end`.

Implement the `MyCalendarTwo` class:
- `MyClaendarTwo()` initializes the calendar object
- `boolean book(int start, int end)` returns `true` if the event can be added to the calendar successfully without causing a triple booking. Otherwise, return `false` and do not add the event to the calendar. 

## Example
```
Input
["MyCalendarTwo", "book", "book", "book", "book", "book", "book"]
[[], [10, 20], [50, 60], [10, 40], [5, 15], [5, 10], [25, 55]]
Output
[null, true, true, true, false, true, true]
```

## Key Idea
First of all, we know two events that are overlapped if `max(start1, start2) < min(end1, end2)`, then two events are overlapped.

We can simply loop over all events and if new event is not overlapped with any events, then we can add it to the list.

If it overlaps with some events, then we take the overlapped interval and add to a list `overLapEvents`. Then we can simply loop over this `overLapEvents` and if it overlaps with the new event, this means three events have overlap and thus we can return false.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)