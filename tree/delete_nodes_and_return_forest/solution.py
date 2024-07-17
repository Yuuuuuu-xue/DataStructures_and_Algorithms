from typing import Optional, List, Set

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def traverse(self, curr: Optional[TreeNode], to_delete: Set[int], is_root: bool):
        if curr is None:
            return
        if curr.val in to_delete:
            self.traverse(curr.left, to_delete, True)
            self.traverse(curr.right, to_delete, True)
            return
        
        # Not in to_delete
        # Check left
        if curr.left:
            self.traverse(curr.left, to_delete, False)
            if curr.left.val in to_delete:
                curr.left = None
        if curr.right:
            self.traverse(curr.right, to_delete, False)
            if curr.right.val in to_delete:
                curr.right = None

        if is_root:
            self.roots.append(curr)

    def delNodes(self, root: Optional[TreeNode], to_delete: List[int]) -> List[TreeNode]:
        self.roots = []
        self.traverse(root, set(to_delete), True)
        return self.roots
