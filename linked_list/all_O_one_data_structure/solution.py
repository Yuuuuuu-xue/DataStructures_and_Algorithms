class Node:
    def __init__(self, freq: int):
        self.freq = freq
        self.keys = set()
        self.prev = None
        self.next = None


class AllOne:

    def __init__(self):
        # Dummy node
        self.head = Node(0)
        self.tail = Node(0)
        self.keys_to_node = {}
        self.head.next = self.tail
        self.tail.prev = self.head
        
    def _add_node(self, prev_node, freq):
        # Add a new node with given frequency after prev node
        new_node = Node(freq)
        new_node.prev = prev_node
        new_node.next = prev_node.next
        prev_node.next.prev = new_node
        prev_node.next = new_node
        return new_node
    
    def _remove_node_if_empty(self, node):
        if not node.keys:
            node.prev.next = node.next
            node.next.prev = node.prev

    def inc(self, key: str) -> None:
        # If the key already exists
        if key in self.keys_to_node:
            curr_node = self.keys_to_node[key]
            curr_node.keys.remove(key)

            next_freq = curr_node.freq + 1
            next_node = curr_node.next

            # Need to move the key to new node since freq is updated
            # If new node doesn't exist or does not have correct requency
            if next_node.freq != next_freq:
                # Need to create a new node
                next_node = self._add_node(curr_node, next_freq)
            
            next_node.keys.add(key)
            self.keys_to_node[key] = next_node

            # Remove the current node if empty for curr_node
            self._remove_node_if_empty(curr_node)
            return
        # If key does not exist, create a node
        first_node = self.head.next
        if first_node.freq != 1:
            first_node = self._add_node(self.head, 1)
        first_node.keys.add(key)
        self.keys_to_node[key] = first_node
        
    def dec(self, key: str) -> None:
        if key not in self.keys_to_node:
            return
        
        curr_node = self.keys_to_node[key]
        curr_node.keys.remove(key) 

        if curr_node.freq == 1:
            # If freq is 1, remove the key entirely
            del self.keys_to_node[key]
            self._remove_node_if_empty(curr_node)
            return

        # Remove from list and update the freq
        prev_freq = curr_node.freq - 1
        prev_node = curr_node.prev

        if prev_node.freq != prev_freq:
            prev_node = self._add_node(curr_node.prev, prev_freq)
        prev_node.keys.add(key)
        self.keys_to_node[key] = prev_node

        self._remove_node_if_empty(curr_node)
        
    def getMaxKey(self) -> str:
        if self.tail.prev.freq == 0:
            # Empty list
            return ""
        return next(iter(self.tail.prev.keys))

    def getMinKey(self) -> str:
        if self.head.next.freq == 0:
            # Empty list
            return ""
        return next(iter(self.head.next.keys))


# Your AllOne object will be instantiated and called as such:
# obj = AllOne()
# obj.inc(key)
# obj.dec(key)
# param_3 = obj.getMaxKey()
# param_4 = obj.getMinKey()