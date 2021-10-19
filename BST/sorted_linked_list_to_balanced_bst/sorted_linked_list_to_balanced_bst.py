class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def sortedListToBST(head: ListNode) -> TreeNode:
    # Convert the linked list into BST
    lst = []
    while head is not None:
        lst.append(head.val)
        head = head.next

    # Build the balanced BST
    def build_tree(start, end):
        # Base Case
        if start > end:
            return None
        mid = (start + end) // 2
        root = TreeNode(mid)
        root.left = build_tree(start, mid - 1)
        root.right = build_tree(mid + 1, end)
        return root

    return build_tree(0, len(lst) - 1)





