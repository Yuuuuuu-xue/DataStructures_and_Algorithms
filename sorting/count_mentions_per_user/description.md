## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3433

## Problem
You are given an integer `numberOfUsers` representing the total number of users and an array `events` of size `n x 3`.

Each `events[i]` can be either of the following two types:
1. Message Event: `["MESSAGE", "tiemstamp_i", "mentions_string_i"]`
 - This event indicates that a set of users was mentioned in a message at `timestamp_i`.
 - The `mentions_string_i` string can contain one of the following tokens:
  - `id<number>`: where `<number>` is an integer in range `[0, numberOfUsers - 1]`. There can be multiple ids separated by a single whitespace and may contain duplicates. This can mention even the offline users.
  - `ALL`: mentions all users
  - `HERE`: mentions all online users
2. Offline Event: `["OFFLINE", "timestamp_i", "id_i"]`
 - This event indicates that the user `id_i ` had become offline at `timestamp_i` for 60 time units. The user will automatically be online again at time `timestamp_i + 60`

Return an array `mentions` wehre `mentions[i]` represents the number of mentions that the user with id `i` has across all `MESSAGE` events.

All users are intiially online, and if a user goes offline or comes back online, their status change is processed before handling any message event that occurs at the same timestamp.

Note that a user can be mentioned multiple times in a single message event, and each mention should be counted separately.

It is guaranteed that the user id referenced in the `OFFLINE` event is online at the time the event occurs.

## Example
```
Input: numberOfUsers = 2, events = [["MESSAGE", "10", "id1 id0"], ["OFFLINE", "11", "0"], ["MESSAGE", "71", "HERE]]
Output: [2, 2]
```

## Key Idea
A simple simulation. We will preprocess the event so that events[i] = [timestamp in int, 0 if "OFFLINE" and 1 if "MESSAGE", ids]

This way, we can simply sort the array and process events based on timestamp. If timestamp is the same, then we will process OFFLINE events before we process MESSAGE events.

Now, if we see MESSAGE event, we basically process id list and update the result.

If it is `ALL`, then we don't need to iterate over the array and increment by 1. We can simply increment a global counter and add the end, add global counter to each element in the array. 

If it is `HERE`, then iterate over active users (which we will discuss later) and increment it.

Now, if we see `OFFLINE` events. We need a way to track online and offlien users. We will have a set for online users and a queue stored the user offline and its timestamp. Everytime we process the event, we will keep pop the offline user array and update online set.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
