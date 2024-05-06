from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode], search_same_structure: bool = False) -> bool:
        if search_same_structure:
            if root is None and subRoot is None:
                return True
            if root is None or subRoot is None:
                return False
            return root.val == subRoot.val and self.isSubtree(root.left, subRoot.left, True) and self.isSubtree(root.right, subRoot.right, True)
        else:
            if root is None:
                return False
            if self.isSubtree(root, subRoot, True):
                return True
            return self.isSubtree(root.left, subRoot, False) or self.isSubtree(root.right, subRoot, False)
            
