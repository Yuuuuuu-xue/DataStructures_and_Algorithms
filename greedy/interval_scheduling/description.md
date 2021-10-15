## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## Interval Scheduling
Given R = {r_1, r_2, ..., r_n} a set of n requests, with each request specifying a start time s_i and a finish time t_i, select a subset A subset R of **mutally compatible** requests of the **maximum** size.

Two requests are **compatible** if they don't overlap in time.

## Greedy Choice
Choose the earliest finish time

## Pseudocode
```
procedure IntervalScheduling(R)
    A := {}
    while R is not empty do
        choose r in R with smallest finishing time
        add r to A
        delete all requests from R that are incompatible with r
    return A
```

## Complexity Analysis
- **Runtime complexity**: O(n lg n)
- **Space complexity**: O(n)

## Solution:
- [Python Solution](interval_scheduling.py)