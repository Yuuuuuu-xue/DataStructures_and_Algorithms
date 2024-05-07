from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def doubleIt(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # Dummy node
        head = ListNode(0, head)
        prev = head
        curr = head.next
        
        while curr is not None:
            num = curr.val * 2
            if num >= 10:
                num -= 10
                prev.val += 1
            curr.val = num
            prev = curr
            curr = curr.next
        
        # If the dummy node has a value 1 then it becomes new node otherwise still dummy
        if head.val > 0:
            return head
        return head.next
