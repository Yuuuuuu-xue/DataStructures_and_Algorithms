from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def replaceValueInTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if root is None:
            return root
        
        q = [(root, 0)]

        while q:
            next_q = []

            curr_level_sum = 0
            for node, _ in q:
                curr_level_sum += node.val
                
                if node.left is not None and node.right is not None:
                    next_q.append((node.left, node.right.val))
                    next_q.append((node.right, node.left.val))
                elif node.left is not None:
                    next_q.append((node.left, 0))
                elif node.right is not None:
                    next_q.append((node.right, 0))
            
            # After getting sum of current level, update node.val
            for node, s in q:
                node.val = curr_level_sum - node.val - s
        
            q = next_q
        
        return root
