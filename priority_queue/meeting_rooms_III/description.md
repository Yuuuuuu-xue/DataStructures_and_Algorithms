## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2402

## Problem
You are given an integer `n`. There are `n` rooms numbered from `0` to `n - 1`.

You are given a 2D integer array `meetings` where `meetings[i] = [start_i, end_i]` means that a meeting will be held during the half-closed time interval `[start_i, end_i)`. All the values of `start_i` are unique.

Meetings are allocated to rooms in the following manner:
1. Each meeting will take place in the unused room with the lowest number
2. If there are no available rooms, the meeting will be delayed until a room becomes free. The delayed meeting should have the same duration as the original meeting.
3. When a room becomes unused, meetings that have an earlier original start time should be given the room

Return the number of the room that held the most meetings. If there are multiple rooms, return the room with the lowest number.

## Example
```
Input: n = 2, meetings = [ [[0,10],[1,5],[2,7],[3,4]]
Output: 0
Explanation:
- At time 0, both rooms are not being used. The first meeting starts in room 0.
- At time 1, only room 1 is not being used. The second meeting starts in room 1.
- At time 2, both rooms are being used. The third meeting is delayed.
- At time 3, both rooms are being used. The fourth meeting is delayed.
- At time 5, the meeting in room 1 finishes. The third meeting starts in room 1 for the time period [5,10).
- At time 10, the meetings in both rooms finish. The fourth meeting starts in room 0 for the time period [10,11).
Both rooms 0 and 1 held 2 meetings, so we return 0. ]
```

## Key Idea
First of all, sort all the meetings by its start time.

Let `roomPq` be a min heap that keeps track of available room. For each meeting, we will use `roomPq.top()` as the available rooms.

Let `endTime` be a min heap of finish time and room number (tuple). For each interval, we pop all the elements from `endTime` in the `timePq` that is smaller or equal than current time and put the `roomNum` into `roomPq`. Then pop an item in `roomPq` and push it.

If we use a room number, we increment its counter and at the end, iterate over it and update it.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)