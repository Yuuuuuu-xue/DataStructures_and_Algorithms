## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## Min Heap
We want to implement heap with following operations:
- **extract_min()**: returns the element with minimum value of priority in the heap and return a tuple of two items:
  1. Element with that priority
  2. Priority (min)
- **insert(element, priority)**: insert an element with given its priority to the heap.
- **decrease_key(element, priority)**: assume the given element is in the heap and its current priority > the given priorty. We will decrease its priority to the given priority. 

The runtime complexity of all operations is $\mathcal{O}(\lg n)$. 

## Solution
- [Python Solution](min_heap_with_decrease_key.py)
