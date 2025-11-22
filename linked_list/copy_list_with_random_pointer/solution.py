from typing import Optional

"""
# Definition for a Node.
"""
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        m = {}
        
        curr = head
        dummy = Node(0)
        curr_copy = dummy

        while curr:
            curr_copy.next = Node(curr.val)
            curr_copy = curr_copy.next
            m[curr] = curr_copy
            curr = curr.next

        # Loop over and update the random pointer
        curr = head
        curr_copy = dummy.next
        while curr:
            if curr.random:
                curr_copy.random = m[curr.random]

            curr = curr.next
            curr_copy = curr_copy.next
        
        return dummy.next