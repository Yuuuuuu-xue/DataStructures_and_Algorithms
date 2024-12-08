## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2054

## Problem
You are given a 0-indexed 2D integer array of `events` where `events[i] = [startTime_i, endTime_i, value_i]`. The `ith` event starts at `startTime_i` and ends at `endTime_i`, and if you attend this event, you will receive a value of `value_i`. You can choose at most two non-overlapping events to attend such that the sum of their values is maximized.

Return this maximum sum.

Note that the start time and end time is inclusive: that is, you cannot attend two events where one of them starts and the other ends at the same time. More specifically, if you attend an event with end time `t`, the next event must start at or after `t + 1`.

## Example
```
Input: events = [[1, 3, 2], [4, 5, 2], [2, 4, 3]]
Output: 4
Explanation: Choose the first and second events, 0 and 1 for a sum of 2 + 2 = 4.
```

## Key Idea
We can sort the events by start time. 

We will use a heap that keep track of end time. So we can loop over all previous visited event that start with smallest ending event time. Then we can simply iterate over all the possible event that can attend with attending to current event.

We use a variable to keep track of this visited event with maximum possible value and thus when we visit an event in the heap and we can pop it.

The possible profit is profit of this value + current event profit.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)