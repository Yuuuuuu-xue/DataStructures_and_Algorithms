from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def traverse(self, curr: Optional[TreeNode]) -> List[int]:
        if not curr:
            return
        self.traverse(curr.left)
        self.traverse(curr.right)
        self.nodes.append(curr.val)  

    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        self.nodes = []
        self.traverse(root)
        return self.nodes
