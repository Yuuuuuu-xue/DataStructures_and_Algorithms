from typing import Optional, List

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def solve(self, o, curr: Optional[ListNode], monoton_stack):
        if curr is None:
            return 0
        
        self.solve(o, curr.next, monoton_stack)
        
        while monoton_stack and monoton_stack[-1] <= curr.val:
            monoton_stack.pop()

        if monoton_stack:
            o.append(monoton_stack[-1])
        else:
            o.append(0)
        
        monoton_stack.append(curr.val)


    def nextLargerNodes(self, head: Optional[ListNode]) -> List[int]:
        o = []
        self.solve(o, head, [])

        return o[::-1]
