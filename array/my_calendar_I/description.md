# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 729

## Problem
You are implementing a program to use as your calendar. We can add a new event if adding the event will not cause a double booking. A double booking happens when two events have some non-empty intersection (i.e. some moment is common to both events). THe event can be represented as a pair of integers `start` and `end` that represents a booking on the half-open interval `[start, end)`, the range of real numbers `x` such that `start <= x < end`.

Implement the `MyCalendar()` class:
- `MyCalendar()` initializes the calendar object
- `boolean book(int start, int end)` returns `true` if the event can be added to the calendar successfully without causing a double booking. Otherwise, return `false` and do not add the event to the calendar.

## Example
```
Input:
["MyCalendar", "book", "book", "book"] (method calls)
[[], [10, 20], [15, 25], [20, 30]] (parameters to the method calls)
Output:
[null, true, false, true] // return value
```

## Basic Idea
We can have a sorted container (i.e. set in C++ or SortedList in Python) of `(start, end)` pairs that keeps track of the all the intervals. Then for each `book()` method, we can find the bisect left of the start, so `(lower_bound_start, lower_bound_end)` and check if lower_bound_end <= start and end <= next element of this pair's start value. If so add this pair and return `true` otherwise `false`.

## Solution
- [C++](./solution.cpp)