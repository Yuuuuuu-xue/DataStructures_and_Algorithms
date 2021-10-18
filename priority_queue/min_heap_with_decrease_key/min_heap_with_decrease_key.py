class MinHeap:
    def __init__(self, max_size: int):
        self.max_size = max_size # the max size of the heap
        self.curr_size = 0 # current number of nodes
        self.heap = [0] * (self.max_size + 1)  # Since 1 based index
        self.priority = {}

    def min_heapify(self, i):
        """
        Perform a min heapify (also known as bubble down) from the node i
        to all its children to maintain the min heap property
        """
        left = 2 * i # left child
        right = 2 * i + 1 # right child

        # if left child is still within current heap and the value is still less than the parent
        if left <= self.curr_size and self.priority[self.heap[left]] < self.priority[self.heap[i]]:
            smallest = left
        else:
            smallest = i
        # go to right if right has even smaller value
        if right <= self.curr_size and self.priority[self.heap[right]] < self.priority[self.heap[smallest]]:
            smallest = right
        # we need to continue min heapify
        if smallest != i:
            # swap the two nodes and their priority
            self.heap[i], self.heap[smallest], self.priority[self.heap[i]], self.priority[self.heap[smallest]] = \
                self.heap[smallest], self.heap[i], self.priority[self.heap[smallest]], self.priority[self.heap[i]]
            self.min_heapify(smallest)

    def decrease_key(self, element, priority):
        """
        Decrease the key <element> for the priority queue. Assume <priority> is smallest than <element> current priority
        """
        self.priority[element] = priority
        curr = self.heap[1:].index(element)
        curr += 1
        # print(element, self.heap, i)
        while curr > 1 and self.priority[self.heap[curr]] < self.priority[self.heap[curr // 2]]:
            # Swap the vertices and also the priority
            self.heap[curr], self.heap[curr // 2], self.priority[self.heap[curr]], self.priority[self.heap[curr // 2]] = \
                self.heap[curr // 2], self.heap[curr], self.priority[self.heap[curr // 2]], self.priority[
                    self.heap[curr]]
            curr = curr // 2

    def extra_min(self):
        """
        Remove and return the min priority in the heap.
        """
        # Bubble down, extract the first node and swap with last node, and
        # then perform min heapify / bubble down
        min_val = self.heap[1]
        min_priority = self.priority[self.heap[1]]
        self.heap[1] = self.heap[self.curr_size]
        self.curr_size -= 1
        self.min_heapify(1)
        return min_val, min_priority

    def insert(self, element, priority):
        """
        Add an item to the heap if the heap is not full yet.
        """
        # If we have more items then the max size, then we cannot insert anymore
        if self.curr_size >= self.max_size:
            return
        self.curr_size += 1
        # append to the last
        self.heap[self.curr_size] = element
        self.priority[element] = priority
        curr = self.curr_size

        # Bubble up, swap curr node with its parent if curr node has a smaller value
        while curr > 1 and self.priority[self.heap[curr]] < self.priority[self.heap[curr // 2]]:
            # Swap the vertices and also the priority
            self.heap[curr], self.heap[curr // 2], self.priority[self.heap[curr]], self.priority[self.heap[curr // 2]] = \
                self.heap[curr // 2], self.heap[curr], self.priority[self.heap[curr // 2]], self.priority[self.heap[curr]]
            curr = curr // 2

    def get_heap(self):
        return self.heap[1:self.curr_size + 1]
