## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1942

## Problem
There is a party where `n` friends nubered from `0` to `n - 1` are attending. There is an infinite number of chairs in this party that are numbered from `0` to `infinity`. When a friend arrives at the party, they sit on the unoccupied chair with the smallest number.

For example, if chairs `0`, `1`, and `5` are occupied when a friend comes, they will sit on chair number `2`.

When a friend leaes the party, their chair becomes unoccupied at the moment they leave. If another friend arrives at the same moment, they can sit in that chair.

You are given a 0-indexed 2D integer array `times` where `times[i] = [arrival_i, leaving_i]`, indicating the arrival and leaving times of the `ith` friend respectively, and an integer `targetFriend`. All arival times are distinct.

Return the chair number that the friend numbered `targetFriend` will sit on.

## Example
```
Input: times = [[1, 4], [2, 3], [4, 6]], targetFriend = 1
Output: 1 
Explanation:
- Friend 0 arrives at time 1 and sits on chair 0
- Friend 1 arrives at time 2 and sits on chair 1
- Friend 1 leaves at time 3 and chair 1 becomes empty
- Friend 0 leaves at time 4 and chair 0 becomes empty
- Friend 2 arrives at time 4 and sits on chair 0
```

## Key Idea
First of all, we need to sort the times by arrival time from smallest to largest because we want to assign smallest chair available when a person arrival.

Then we need to record when will the friend leaves. For a given arrival time `x` of a friend, we need to remove all friends that have `leaving` time `<= x`. To efficiently achieve this, we can use a min heap on the leaving time so we can pop all the friends with leaving time `<= x`. We also need to store its chair associated with its leaving time.

Now, after update all the friends that will leave, we need to store its available chair and get the smallest one. This suggests us to use another heap to store the available chair. When the heap is empty, we need to use the next largest chair available.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)