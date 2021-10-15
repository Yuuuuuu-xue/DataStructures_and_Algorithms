## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## Interval Partitioning
Given many identical resources and a list of requests, schedule all of them using as few resources as possible. Thus given a collection of requests, each item is a tuple of s_i and t_i representing the start time and end time of current request. We will return a tuple of two items. First item is the number of resources we need. Second item is a map that maps each resource to a collection of requests assigned to current resource.

## Greedy Choice
We will assign current request to the resource that finishes earliest, if they are not compatible, then we will assign it to a new resource.

## Pseudocode
```
procedure IntervalPartitioning(R)
    sort requests by their starting times
    d := 0
    Q := empty priority queue implemented using min heap
    for j from 1 to n do
        k = Dequeue(Q)
        if request r_j is compatible with resource k then
            schedule r_j on k
            update the value of k in Q to t_j
        else
            allocate a new resource d + 1 
            schedule request r_j on resource d + 1 
            d = d + 1
            enqueue d + 1 in Q with value t_j
```

## Complexity Analysis
- **Runtime complexity**: O(n lg n)
- **Space complexity**: O(n)

## Solution:
- [Python Solution](interval_partitioning.py)