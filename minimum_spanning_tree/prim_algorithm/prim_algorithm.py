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


def prim_algorithm(vertices, edges, weight, root):
    priority_queue = MinHeap(len(vertices))
    parent = {}

    # Initialization
    for v in vertices:
        if v != root:
            priority_queue.insert(v, float('inf'))
        parent[v] = None
    priority_queue.insert(root, 0)

    # build the MST
    output = []
    while priority_queue.curr_size > 0:

        curr, priority = priority_queue.extra_min()
        # Since parent of root is None
        if curr != root:
            output.append((parent[curr], curr))
        for neighbour in edges[curr]:
            # Update priority
            # print(neighbour, weight[(curr, neighbour)], priority_queue.priority[neighbour])
            if neighbour in priority_queue.get_heap() and weight[(curr, neighbour)] < priority_queue.priority[neighbour]:
                priority_queue.decrease_key(neighbour, weight[(curr, neighbour)])
                parent[neighbour] = curr
    return output


if __name__ == '__main__':
    test_vertices = [0, 1, 2, 3, 4]
    test_edges = {
        0: [1, 2, 3],
        1: [0, 4],
        2: [0, 3],
        3: [0, 2, 4],
        4: [1, 3]
    }
    test_weight = {
        (0, 1): 5,
        (1, 0): 5,
        (1, 4): 2,
        (4, 1): 2,
        (4, 3): 2.5,
        (3, 4): 2.5,
        (2, 3): 3,
        (3, 2): 3,
        (0, 3): 4,
        (3, 0): 4,
        (0, 2): 1,
        (2, 0): 1
    }
    print(prim_algorithm(test_vertices, test_edges, test_weight, 0) == [(0, 2), (2, 3), (3, 4), (4, 1)])
