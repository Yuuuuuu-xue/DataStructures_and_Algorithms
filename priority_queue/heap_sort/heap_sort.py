class MaxHeap:
    def __init__(self, max_size: int):
        self.max_size = max_size # the max size of the heap
        self.curr_size = 0 # current number of nodes
        self.heap = [0] * (self.max_size + 1)  # Since 1 based index

    def max_heapify(self, i):
        """
        Perform a max heapify (also known as bubble down) from the node i
        to all its children to maintain the max heap property
        """
        left = 2 * i # left child 
        right = 2 * i + 1 # right child

        # if left child is still within current heap and the value is still less than the parent
        if left <= self.curr_size and self.heap[left] > self.heap[i]:
            largest = left
        else:
            largest = i
        # go to right if right has even smaller value
        if right <= self.curr_size and self.heap[right] > self.heap[largest]:
            largest = right
        # we need to continue min heapify
        if largest != i:
            # swap the two nodes
            self.heap[i], self.heap[largest] = self.heap[largest], self.heap[i]
            self.max_heapify(largest)

    def extra_max(self):
        """
        Remove and return the max value in the heap.
        """
        # Bubble down, extract the first node and swap with last node, and
        # then perform min heapify / bubble down
        max_val = self.heap[1]
        self.heap[1] = self.heap[self.curr_size]
        self.curr_size -= 1
        self.max_heapify(1)
        return max_val

    def insert(self, element):
        """
        Add an item to the heap if the heap is not full yet.
        """
        # If we have more items then the max size, then we cannot insert anymore
        if self.curr_size >= self.max_size:
            return
        self.curr_size += 1
        # append to the last
        self.heap[self.curr_size] = element
        curr = self.curr_size

        # Bubble up, swap curr node with its parent if curr node has a larger value
        while curr > 1 and self.heap[curr] > self.heap[curr // 2]:
            self.heap[curr], self.heap[curr // 2] = self.heap[curr // 2], \
                                                    self.heap[curr]
            curr = curr // 2

    def __len__(self):
        """
        Return the length of the current size of the heap.
        """
        return self.curr_size

    def __str__(self):
        """
        Return a String representation of the heap.
        """
        return str(self.heap)


def heap_sort(max_heap: MaxHeap) -> list:
    """
    Given a valid max heap <max_heap>, return a sorted list
    """
    total_size = max_heap.curr_size
    while max_heap.curr_size > 0:
        # Swap the root element and last element
        max_heap.heap[1], max_heap.heap[max_heap.curr_size] = max_heap.heap[max_heap.curr_size], max_heap.heap[1]
        # Decrease the size 
        max_heap.curr_size -= 1
        # Perform bubble down from root
        max_heap.max_heapify(1)
    
    return max_heap.heap[1:total_size + 1]  # Since 1 index based


if __name__ == '__main__':
    test_max_heap = MaxHeap(10)
    items = [17, 13, 7, 3, 4, 9, 7, 15, 9, 5]
    for item in items:
        test_max_heap.insert(item)
    print(heap_sort(test_max_heap) == sorted(items))
