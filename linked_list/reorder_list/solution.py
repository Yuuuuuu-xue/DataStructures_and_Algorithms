from typing import Optional

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        stack = []
        
        curr = head
        while curr:
            stack.append(curr)
            curr = curr.next

        n = len(stack)

        new_head = head
        for _ in range(n // 2):
            next_head = new_head.next
            new_head.next = stack.pop()
            new_head.next.next = next_head
            new_head = next_head
        
        new_head.next = None
        
        return head

        