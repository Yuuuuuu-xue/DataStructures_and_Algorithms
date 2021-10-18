from typing import *


class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


def detect_cycle(head: ListNode) -> Optional[ListNode]:
    slow = fast = head
    while fast is not None:
        fast = fast.next

        # react the end
        if fast is None:
            return None

        # Move fast again since two steps
        fast = fast.next
        # Move slow since one step
        slow = slow.next

        # Then detect a cycle and we should search for the first node
        if fast == slow:
            break

    # Check for outer loop breaks also base case if head is None
    if fast is None:
        return None

    # Set slow to the head and move one step at a time
    slow = head

    # Move fast one step as well, when they meet, that's the beginning node of a cycle
    while slow != fast:
        slow = slow.next
        fast = fast.next

    return slow


if __name__ == '__main__':
    test_cycle_list = ListNode(3)
    test_cycle_list.next = ListNode(2)
    test_cycle_list.next.next = ListNode(0)
    test_cycle_list.next.next.next = ListNode(4)
    test_cycle_list.next.next.next.next = test_cycle_list.next

    print(2 == detect_cycle(test_cycle_list).val)

    test_no_cycle_list = ListNode(3)
    test_no_cycle_list.next = ListNode(2)
    test_no_cycle_list.next.next = ListNode(0)
    test_no_cycle_list.next.next.next = ListNode(4)
    print(detect_cycle(test_no_cycle_list) is None)
