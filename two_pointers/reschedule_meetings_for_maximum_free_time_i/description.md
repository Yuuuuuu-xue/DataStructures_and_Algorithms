# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 3439

## Problem
You are given an integer `eventTime` denoting the duration of an event, where the event occurs from time `t = 0` to time `t = eventTime`.

You are also given two integer arrays `startTime` and `endTime`, each of length `n`. These represent the start and end time of `n` non-overlapping meetings, where the `ith` meeting occurs during the time `[startTime[i], endTime[i]]`

You can reschedule at most `k` meetings by moving their start time while maintaining the same duration, to maximize the longest continuous period of free time during the event.

The relative order of all the meetings should stay the same and they should remain non-overlapping.

Return the maximum amount of free time possible after rearraning the meetings.

Note that the meetings cannot be rescheduled to a time outside the event.

## Example:
```
Input: eventTime = 5, k = 1, startTime = [1, 3], endTime = [2, 5]
Output: 2
Explanation: Reschedule meeting at [1, 2] to [2, 3], leaving no meetings during the time [0, 2].

Input: eventTime = 10, k = 1, startTime = [0, 2, 9], endTime = [1, 4, 10]
Output: 6
Explanation: Reschedule the meeting at [2, 4] o [1, 3], leaving no meetings during the time [3, 9]
```

## Key Idea
Note, if we have meetings less than or equal to `k`, we can simply move all meetings to start sequentially with no break and first meeting starts at t = 0 and thus we have the longest break.

However, with meetings more than `k`, the meetings must happen sequentially with no break to yield the maximum possible result.

Thus, we can use a sliding window to solve this problem. First of all, sort the meetings by their startTime. Then, we can start move the meeting together and first meeting starts at t = 0.

If more than `k` meetings, we will remove first meeting in the window and thus all meetings must start after first meeting is done.

To find out the maximum possible break time, we can simply use the endTime of current window to the start of next meeting.

If there is a solution that (longest break) later, we will visit it later as well.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(k)

## Solution
- [Python](./solution.py)