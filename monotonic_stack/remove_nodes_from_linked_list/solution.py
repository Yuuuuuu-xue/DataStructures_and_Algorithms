from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def removeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head

        monotonic_stack = []

        while curr is not None:
            while len(monotonic_stack) > 0 and monotonic_stack[-1].val < curr.val:
                # Remove from monotonic stack since it's in a non-increasing order
                monotonic_stack.pop()
            
            monotonic_stack.append(curr)
            curr = curr.next

        if len(monotonic_stack) == 0:
            return None
        
        # Connect everything in the monotonic stack is the linked list that we are looking for
        monotonic_stack.append(None)
        for i in range(len(monotonic_stack) - 1):
            monotonic_stack[i].next = monotonic_stack[i + 1]
        return monotonic_stack[0]
