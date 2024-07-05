from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def nodesBetweenCriticalPoints(self, head: Optional[ListNode]) -> List[int]:
        if not head or not head.next or not head.next.next:
            return [-1, -1]

        prev_val = head.val
        curr = head.next

        min_dist = -1

        prev_critical_point = -1
        first_critical_point = -1
        i = 0

        while curr.next:
            # Critical point
            if (curr.val > prev_val and curr.val > curr.next.val) or (curr.val < prev_val and curr.val < curr.next.val):
                # Calculate critical distnace
                if prev_critical_point != -1:
                    dist = i - prev_critical_point
                    if min_dist == -1:
                        min_dist = dist
                    else: 
                        min_dist = min(min_dist, dist)
                else:
                    first_critical_point = i

                prev_critical_point = i
            else:
                # Not a critical point
                pass
            
            i += 1
            prev_val = curr.val
            curr = curr.next

        if first_critical_point == -1 or min_dist == -1:
            return [-1, -1]
        return [min_dist, prev_critical_point - first_critical_point]