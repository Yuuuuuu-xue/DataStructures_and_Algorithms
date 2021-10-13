## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## Array Based Implementation
- use an array to store the heap
- use 1-based indexing so root is at element 1
- for node at position i
  - left child is at 2 * i
  - right child is at 2 * i + 1
  - parent is at floor(i / 2)

#### Implementation of Max Heap
  - [Python Solution](implementation_max_heap.py), in Python, we can
    ```
    import heapq
    max_heap = []
    
    # Insert
    # * -1 since it was implemented using min heap
    heapq.heappush(max_heap, -1 * item)
    
    # Find Max
    largestElement = -1 * max_heap[0]

    # Extract Max
    largestElement = -1 * heapq.heappop(max_heap)
    ```
#### Implementation of Min Heap
  - [Python Solution](implementation_min_heap.py), in Python, we can
    ```
    import heapq
    min_heap = []
    
    # Insert
    heapq.heappush(min_heap, item)
    
    # Find Min
    largestElement = min_heap[0]

    # Extract Min
    largestElement = heapq.heappop(min_heap)
    ```