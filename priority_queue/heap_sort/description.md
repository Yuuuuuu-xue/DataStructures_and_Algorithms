## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## Heap Sort
Assuming we start with a valid heap, how do we get a sorted list?

#### Key Idea
Suppose we have a max heap
1. Remove the root and put it in an array at the end (since largest element)
2. Decrement the heap size
3. Restore the heap property (bubble down)

#### Inplace Idea
1. Swap the root element and last element of the heap
2. Decrease the heap size
3. Perform the bubble down operation starting from root to maintain the heap property

#### Complexity
1. **Runtime** complexity: O(n lg n)
2. **Space** complexity: O(1) since we use in place

## Solution
- [Python Solution](heap_sort.py)