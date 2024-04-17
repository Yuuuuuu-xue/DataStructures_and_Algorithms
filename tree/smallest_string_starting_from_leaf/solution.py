from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def solve(self, root: Optional[TreeNode], curr_path: str):
        if root is None:
            return
        curr_path += chr(ord('a') + root.val)
        # Leaf node
        if root.left is None and root.right is None:
            if len(self.smallest_path) == 0:
                self.smallest_path = curr_path[::-1]
            else:
                reverse_path = curr_path[::-1]
                self.smallest_path = min(self.smallest_path, reverse_path)
        self.solve(root.left, curr_path)
        self.solve(root.right, curr_path)

    def smallestFromLeaf(self, root: Optional[TreeNode]) -> str:
        self.smallest_path = ""
        self.solve(root, "")
        return self.smallest_path
