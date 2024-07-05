# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # Dummy node
        new_head = ListNode()
        curr = head.next
        new_curr = new_head
        curr_val = 0
        
        while curr is not None:
            if curr.val == 0:
                new_curr.next = ListNode(curr_val)
                new_curr = new_curr.next
                curr_val = 0
            else:
                curr_val += curr.val
            
            curr = curr.next
        
        return new_head.next
                
        