from collections import zip, defaultdict, deque
import heapq
import queue
import bisect

class Solution:
    def __init__(self):
        pass

    def __len__(self):
        pass

    def cheat(self):
        items = []
        item = 5
        items.sort(key=lambda x : (abs(x - item), x), reverse=True)
        # Or
        sorted_items = sorted(items, key=lambda x : (abs(x - item), x), reverse=True)
        
        min_heap = []
        heapq.heappush(min_heap, 5)
        top_element = min_heap[0]
        heapq.heappop(min_heap)
        
        lst = []
        lst.append(5)
        lst.pop()

        m = {'hello': 'world'}
        m[0] = 1
        len(m)
        # Raise key error if not exist
        del m['hello']
        removed_value = m.pop('hello')

        s = set()
        s.add("4")
        # Raise key error if not exist
        s.remove("5")

        fifo_queue = queue.Queue()
        fifo_queue.put(10)
        # Remove and return
        fifo_queue.get()
        # Not remove
        first_item = fifo_queue.queue[0]

        my_deque = deque()
        my_deque.append(1)
        my_deque.appendleft(2)
        my_deque.pop()
        my_deque.popleft()
        my_element = my_deque[0]




class Trie:
    def __init__(self):
        self.children = {}
    
    def add_word(self, word: str):
        curr = self
        for c in word:
            if c not in curr.children:
                curr.children[c] = Trie()
            curr = curr.children[c]


class DisjointSet:
    def __init__(self, n):
        self.parent = [i for i in range(n + 1)]
        self.freq = [1] * (n + 1)
        self.rank = [0] * (n + 1)
    
    def find(self, x):
        if x != self.parent[x]:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]
    
    def union(self, u, v):
        parent_u, parent_v = self.find(u), self.find(v)

        # Belongs to the same group
        if parent_u == parent_v:
            return False

        # Union by rank
        if self.rank[parent_u] > self.rank[parent_v]:
            # Assign parent_v -> parent_u
            # Thus clear the freq of parent_v and increment the freq for parent_u
            # When we call find() and then get its frequency, by union find, it will point to parent_u
            self.freq[self.parent[parent_u]] += self.freq[self.parent[parent_v]]
            self.freq[self.parent[parent_v]] = 0
            self.parent[parent_v] = self.parent[parent_u]
        elif self.rank[parent_v] > self.rank[parent_u]:
            self.freq[self.parent[parent_v]] += self.freq[self.parent[parent_u]]
            self.freq[self.parent[parent_u]] = 0
            self.parent[parent_u] = self.parent[parent_v]
        else:
            self.freq[self.parent[parent_u]] += self.freq[self.parent[parent_v]]
            self.freq[self.parent[parent_v]] = 0
            self.parent[parent_v] = self.parent[parent_u]
            self.rank[parent_u] += 1
        return True

    def max_freq(self):
        return max(self.freq)


