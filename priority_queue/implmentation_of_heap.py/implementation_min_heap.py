class MinHeap:
    def __init__(self, max_size: int):
        self.max_size = max_size # the max size of the heap
        self.curr_size = 0 # current number of nodes
        self.heap = [0] * (self.max_size + 1)  # Since 1 based index

    def min_heapify(self, i):
        """
        Perform a min heapify (also known as bubble down) from the node i
        to all its children to maintain the min heap property
        """
        left = 2 * i # left child 
        right = 2 * i + 1 # right child

        # if left child is still within current heap and the value is still less than the parent
        if left <= self.curr_size and self.heap[left] < self.heap[i]:
            smallest = left
        else:
            smallest = i
        # go to right if right has even smaller value
        if right <= self.curr_size and self.heap[right] < self.heap[smallest]:
            smallest = right
        # we need to continue min heapify
        if smallest != i:
            # swap the two nodes
            self.heap[i], self.heap[smallest] = self.heap[smallest], self.heap[i]
            self.min_heapify(smallest)

    def extra_min(self):
        """
        Remove and return the min value in the heap.
        """
        # Bubble down, extract the first node and swap with last node, and
        # then perform min heapify / bubble down
        min_val = self.heap[1]
        self.heap[1] = self.heap[self.curr_size]
        self.curr_size -= 1
        self.min_heapify(1)
        return min_val

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

        # Bubble up, swap curr node with its parent if curr node has a smaller value
        while curr > 1 and self.heap[curr] < self.heap[curr // 2]:
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
