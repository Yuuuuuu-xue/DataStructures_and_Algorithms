from typing import List, Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def solve(self, head: Optional[ListNode], mono_stack: List[int], o: List[int]):
        if head is None:
            return
        self.solve(head.next, mono_stack, o)
        
        # Pop all the elements <= x
        while len(mono_stack) > 0 and mono_stack[-1] <= head.val:
            mono_stack.pop()
        
        if len(mono_stack) > 0:
            o.append(mono_stack[-1])
        else:
            o.append(0)
        
        mono_stack.append(head.val)

    def nextLargerNodes(self, head: Optional[ListNode]) -> List[int]:
        o = []
        mono_stack = []
        self.solve(head, mono_stack, o)
        return o[::-1]
