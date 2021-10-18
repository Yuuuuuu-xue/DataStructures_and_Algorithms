from typing import *


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def findMaxHeight(root: Optional[TreeNode]) -> int:
    if root is None:
        return 0
    else:
        left_height = findMaxHeight(root.left)
        right_height = findMaxHeight(root.right)
        # + 1 for the root
        return max(left_height, right_height) + 1


def isBalanced(root: Optional[TreeNode]) -> bool:
    # Base case, root is None then it is balanced
    if root is None:
        return True

    # Check if abs(max height of left subtree - max height of left subtree) <= 0
    if abs(findMaxHeight(root.left) - findMaxHeight(root.right)) > 1:
        return False

    # Check if left subtree is height balanced
    if not isBalanced(root.left):
        return False

    # Check if right subtree is height balanced
    if not isBalanced(root.right):
        return False

    # All conditions are met
    return True


if __name__ == '__main__':
    test_balanced_tree = TreeNode(3)
    test_balanced_tree.left = TreeNode(9)
    test_balanced_tree.right = TreeNode(20)
    test_balanced_tree.right.left = TreeNode(15)
    test_balanced_tree.right.right = TreeNode(7)
    print(1 == isBalanced(test_balanced_tree))

    test_not_balanced_tree = TreeNode(1)
    test_not_balanced_tree.left = TreeNode(2)
    test_not_balanced_tree.left.left = TreeNode(3)
    test_not_balanced_tree.left.left.left = TreeNode(4)
    test_not_balanced_tree.right = TreeNode(2)
    test_not_balanced_tree.right.right = TreeNode(3)
    test_not_balanced_tree.right.right.right = TreeNode(4)
    print(0 == isBalanced(test_not_balanced_tree))

