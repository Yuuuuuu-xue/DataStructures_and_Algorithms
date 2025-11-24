from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def insert(self, head: ListNode, insert_node: ListNode):
        prev = head
        curr = head.next

        while curr and curr.val < insert_node.val:
            prev = curr
            curr = curr.next
        
        # curr is either None of curr.val >= insert_node.val
        prev.next = insert_node
        insert_node.next = curr

    def insertionSortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode()

        curr = head
        while curr:
            curr_next = curr.next
            self.insert(dummy, curr)
            curr = curr_next
        
        return dummy.next


