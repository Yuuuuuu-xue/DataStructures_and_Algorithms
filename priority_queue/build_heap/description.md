## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## Build Heap
Assuming we have an unsorted array with n values, we want to build the heap from this array. One obvious way is to loop over each element and call insert() which takes O(n lg n) overall runtime. Is is possible to do it with O(n) runtime?

#### Key Idea
1. We build the heap from back to front and call bubble down for each node

#### Complexity Analysis
1. **Runtime** complexity is O(n)
2. **Space** complexity is O(n) 

## Solution
- [Python Solution](build_heap.py)