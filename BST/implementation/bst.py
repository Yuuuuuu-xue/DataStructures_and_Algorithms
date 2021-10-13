from typing import *


# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def search(root: Optional[TreeNode], item: int) -> Optional[TreeNode]:
    # Base Case, if root is None or we found it
    if root is None or root.val == item:
        return root
    else:
        # If root value is greater than the item, then it has to be the left subtree
        if root.val > item:
            return search(root.left, item)
        # Otherwise, we go to the right subtree
        else:
            return search(root.right, item)


def insert(root: Optional[TreeNode], item: int) -> TreeNode:
    """
    Insert the node with value <item> into the BST rooted at <root>. Return the root of the new tree.
    """
    # Base Case, empty tree
    if root is None:
        return TreeNode(item)
    else:
        # Left subtree
        if root.val > item:
            root.left = insert(root.left, item)
        else:
            root.right = insert(root.right, item)
    return root


def delete(root: Optional[TreeNode], item: int) -> Optional[TreeNode]:
    """
    Delete the node with value <item> from given BST rooted at <root>, return the root of updated BST
    """
    # Base Case, empty tree, then do nothing
    if root is None:
        pass
    else:
        # Left subtree
        if root.val > item:
            root.left = delete(root.left, item)
        # Right subtree
        elif root.val < item:
            root.right = delete(root.right, item)
        # At the current root
        else:
            if root.left is None:
                root = root.right
            elif root.right is None:
                root = root.left
            # Now it has both left and right children
            else:
                # We will remove the smallest key in the right subtree and move it to the root.
                root.item, root.right = _delete_min(root.right)
    return root


def _delete_min(curr: TreeNode):
    """
    Remove the element with smallest key rooted at curr. Return the value of that element and its updated root.
    """
    # Base Case, it does not have a left children, then the smallest element is the root itself
    if curr.left is None:
        return curr.val, curr.right
    # find the smallest element
    else:
        curr_val, curr.left = _delete_min(curr.left)
        return curr_val, curr


if __name__ == '__main__':
    pass
