import heapq
from typing import Optional, List

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        pq = []
        for i in range(len(lists)):
            if lists[i]:
                heapq.heappush(pq, (lists[i].val, i, lists[i]))
        
        dummy = ListNode()
        curr = dummy

        while pq:
            val, i, smallest_curr = heapq.heappop(pq)
            curr.next = ListNode(val)
            curr = curr.next

            if smallest_curr.next:
                heapq.heappush(pq, (smallest_curr.next.val, i, smallest_curr.next))
        
        return dummy.next
